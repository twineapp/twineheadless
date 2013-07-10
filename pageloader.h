#ifndef PAGELOADER_H
#define PAGELOADER_H

#include <QObject>
#include <QWebPage>
#include <QWebFrame>
#include <QUrl>

class PageLoader : public QObject
{
    Q_OBJECT
public:
    PageLoader(const QUrl &url);

Q_SIGNALS:
    void finished();
    
private Q_SLOTS:
    void render();
    void checkIfPDFReady();
    
private:
    QWebPage web_page;
    
};

#endif // PAGELOADER_H
