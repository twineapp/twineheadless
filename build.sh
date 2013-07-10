#!/usr/bin/env bash

set -e

QT_CFG=''

BUILD_CONFIRM=0
COMPILE_JOBS=1
MAKEFLAGS_JOBS=''

if [[ "$MAKEFLAGS" != "" ]]; then
    MAKEFLAGS_JOBS=$(echo $MAKEFLAGS | egrep -0 '\-j[0-9]+' | egrep -o '[0-9]')
fi

if [[ "$MAKEFLAGS_JOBS" != "" ]]; then
    COMPILE_JOBS=$MAKEFLAGS_JOBS
elif [[ $OSTYPE == darwin* ]]; then
    COMPILE_JOBS=4
elif [[ $OSTYPE == freebsd* ]]; then
    COMPILE_JOBS=`sysctl -n hw.ncpu`
else
    CPU_CORES=`grep -c ^processor /proc/cpuinfo`
    if [[ "$CPU_CORES" -gt 1 ]]; then
	COMPILE_JOBS=$CPU_CORES
    fi
fi

if [[ "$COMPILE_JOBS" -gt 8 ]]; then
    COMPILE_JOBS=8
fi

until [ -z "$1" ]; do
   case $1 in
       "--qt-config")
	   shift
	   QT_CFG="$1"
	   shift;;
	"--qmake-args")
	    shift
	    QMAKE_ARGS=$1
	    shift;;
	"--jobs")
	    shift
	    COMPILE_JOBS=$1
	    shift;;
	"--confirm")
	    BUILD_CONFIRM=1;
	    shift;;
	"--help")
	    echo "Usage: $0 [--qt-config CONFIG] [--jobs NUM]"
	    echo
	    echo " --confirm			Silently confirm the build."
	    echo " --qt-config CONFIG		Specify extra config options to be used when configuring QT"
	    echo " --jobs NUM			How many parallel compile josb to use. Defaults to 4."
	    echo 
	    exit 0
	    ;;
	*)
	    echo "Unrecognized optoin: $1"
	    exit 1;;
    esac
done

if [[ "$BUILD_CONFIRM" -eq 0 ]]; then
cat << EOF
---------------------------------------------------
                   Warning
---------------------------------------------------

Building TwineHeadless from source takes a very long time, anywhere from 30 minutes to
several hours (depending on the machien configuration). It is recommended to use
a premade binary package instead.

EOF

    echo "Do you want to continue (y/n)"
    read continue
    if [[ "$continue" != "y" ]]; then
	exit 1
    fi
    echo
    echo
fi

cd qt && ./preconfig.sh --jobs $COMPILE_JOBS --qt-config "$QT_CONFIG" && cd ../
qt/bin/qmake $QMAKE_ARGS
make -j$COMPILE_JOBS
