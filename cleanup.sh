#!/bin/bash

find . -iname "*.pro.user" -exec rm -rf {} \;
find . -iname "*.pro.user.*" -exec rm -rf {} \;
find . -iname "*.slo" -exec rm -rf {} \;
find . -iname "*.lo" -exec rm -rf {} \;
find . -iname "*.o" -exec rm -rf {} \;
find . -iname "*.a" -exec rm -rf {} \;
find . -iname "*la" -exec rm -rf {} \;
find . -iname "*.lai" -exec rm -rf {} \;
find . -iname "*.so" -exec rm -rf {} \;
find . -iname "*.dll" -exec rm -rf {} \;
find . -iname "*.dylib" -exec rm -rf {} \;

find . -iname "moc_*.cpp" -exec rm -rf {} \;
find . -iname "qrc_*.cpp" -exec rm -rf {} \;
find . -iname "Makefile" -exec rm -rf {} \;
find . -iname "*-build-*" -exec rm -rf {} \;
