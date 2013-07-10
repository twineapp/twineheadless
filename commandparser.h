#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include <QObject>
#include "qcommandline.h"

class CommandParser : QObject
{
       Q_OBJECT
public:
    CommandParser();

    QString urlToLoad() const;
    void setUrlToLoad(const QString &value);

public slots:
    void parseError(const QString & error);
    void switchFound(const QString & name);
    void optionFound(const QString & name, const QVariant & value);
    void paramFound(const QString & name, const QVariant & value);

private:
    QCommandLine *cmdline;

    QString m_urlToLoad;
};

#endif // COMMANDPARSER_H
