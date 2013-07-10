#include "commandparser.h"
#include "qcommandline.h"
#include <QApplication>
#include <QDebug>
#include <QVariant>

CommandParser::CommandParser()
{
    static const struct QCommandLineConfigEntry conf[] =
    {
        { QCommandLine::Option, '\0', "url", "Sets the URL that the headless browser will load; --url=http://google.com", QCommandLine::Mandatory },
        //{ QCommandLine::Switch, 'l', "list", "Show a list", QCommandLine::Optional },
        //{ QCommandLine::Param, '\0', "target", "The target", QCommandLine::Mandatory },
        //{ QCommandLine::Param, '\0', "source", "The sources", QCommandLine::MandatoryMultiple },
        QCOMMANDLINE_CONFIG_ENTRY_END
    };

    cmdline = new QCommandLine(this);
    cmdline->setConfig(conf);
    cmdline->enableVersion(true); // enable -v // -- version
    cmdline->enableHelp(true); // enable -h // --help

    connect(cmdline, SIGNAL(switchFound(const QString &)),
            this, SLOT(switchFound(const QString &)));
    connect(cmdline, SIGNAL(optionFound(const QString &, const QVariant &)),
            this, SLOT(optionFound(const QString &, const QVariant &)));
    connect(cmdline, SIGNAL(paramFound(const QString &, const QVariant &)),
            this, SLOT(paramFound(const QString &, const QVariant &)));
    connect(cmdline, SIGNAL(parseError(const QString &)),
            this, SLOT(parseError(const QString &)));

    cmdline->parse();
}

void CommandParser::switchFound(const QString & name)
{
    qWarning() << "Switch: " << name;
}

void CommandParser::optionFound(const QString & name, const QVariant & value)
{
    //qWarning() << "Option: " << name << value.toString();
    setUrlToLoad(value.toString());
}

void CommandParser::paramFound(const QString & name, const QVariant & value)
{
    qWarning() << "Param: " << name << value.toString();
    setUrlToLoad(value.toString());
}

void CommandParser::parseError(const QString & error)
{
    qWarning() << qPrintable(error);
    cmdline->showHelp(true, -1);
    QApplication::quit();
}

QString CommandParser::urlToLoad() const
{
    return m_urlToLoad;
}

void CommandParser::setUrlToLoad(const QString &value)
{
    m_urlToLoad = value;
}

