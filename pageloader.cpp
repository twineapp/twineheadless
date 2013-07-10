#include "pageloader.h"

#include <QWebPage>
#include <QWebFrame>
#include <QDebug>
#include <QApplication>
#include <QWebElement>
#include <QWebSettings>
#include <QTimer>

PageLoader::PageLoader(const QUrl &url)
{
    QWebSettings *opt = web_page.settings();

    opt->setAttribute(QWebSettings::AutoLoadImages, true);
    opt->setAttribute(QWebSettings::JavascriptEnabled, true);
    opt->setAttribute(QWebSettings::XSSAuditingEnabled, true);
    opt->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls, true);
    //opt->setAttribute(QWebSettings::WebSecurityEnabled, false);
    opt->setAttribute(QWebSettings::JavascriptCanOpenWindows, true);
    opt->setAttribute(QWebSettings::JavascriptCanCloseWindows, true);

    web_page.mainFrame()->setUrl(url);

    QWebFrame *m_webframe = web_page.mainFrame();

    connect(m_webframe, SIGNAL(loadFinished(bool)),
            this, SLOT(render()));

}

void PageLoader::render(){

    web_page.setViewportSize(web_page.mainFrame()->contentsSize());

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(checkIfPDFReady()));
    timer->start(3000);
}

void PageLoader::checkIfPDFReady()
{
    QWebElement web_el = web_page.mainFrame()->findFirstElement("#process-status");
    QVariant status_text = web_el.toPlainText();

    if(status_text.toString() != "0")
    {
        // The PDF is done loading
        // Get the HTML attribute that has the PDF link in it.
        QWebElement link_el = web_page.mainFrame()->findFirstElement("#pdf-link");
        QVariant link_text = link_el.toPlainText();
        // Print out the URL
        qDebug() << link_text.toString();
        // Detroy the application
        QApplication::exit();
    } else if (status_text.toString() == "2"){
        qDebug() << "Error";
        QApplication::exit();
    }
}
