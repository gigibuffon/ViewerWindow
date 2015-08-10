#ifndef VIEWERWINDOW_H
#define VIEWERWINDOW_H

#include <QMainWindow>
#include <txtviewer.h>

class QMenuBar;
class QString;

namespace Ui {
class ViewerWindow;
}

class ViewerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewerWindow(QWidget *parent = 0);
    ~ViewerWindow();

    TxtViewer *v;
    QMenuBar *menu;
    QAction *actionOpen;
    QAction *actionClose;


    QString *SMfile;
    void setF(QString);

public slots:
    void open();
    void closeit();

private:
    Ui::ViewerWindow *ui;
};


#endif // VIEWERWINDOW_H

