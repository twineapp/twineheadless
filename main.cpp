#include <QApplication>
#include <QIcon>
#include <QWebPage>
#include <QUrl>
#include <QWebFrame>
#include <QDebug>

#include "commandparser.h"
#include "pageloader.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    app.setApplicationName("TwineHeadlessBrowser");
    app.setOrganizationName("Twine");
    app.setApplicationVersion("1.0.0");

    CommandParser cmdParser;

    PageLoader page_loader(QUrl(cmdParser.urlToLoad()));

    app.exec();
}
