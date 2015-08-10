#include "viewerwindow.h"
#include "ui_viewerwindow.h"

#include <QGridLayout>
#include <QLabel>


ViewerWindow::ViewerWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::ViewerWindow)
{
    ui->setupUi(this);

    //String for result file of ScnesManager
    SMfile = new QString();

    //MenuBar of window
    menu= new QMenuBar();
    //Action to open file for user
    QMenu* openF = new QMenu("Open");
    actionOpen = new QAction("Select File", openF);
    connect(actionOpen, SIGNAL(triggered()), this, SLOT(open()));
    openF->addAction(actionOpen);
    //Action to close window
    QMenu* closeW = new QMenu("Close");
    actionClose = new QAction("Exit", closeW);
    connect(actionClose, SIGNAL(triggered()), this, SLOT(closeit()));
    closeW->addAction(actionClose);

    menu->addMenu(openF);
    menu->addMenu(closeW);

    setMenuWidget(menu);


}

void ViewerWindow::open(){
//This function oper a dialog window to select file for markers comparation

    QString inputF = QFileDialog::getOpenFileName(this, tr("Open first file to compare..."),"", tr("Text files (*.txt);"));
    qDebug() << "file da SM: "<< *SMfile;
    qDebug() << "file da input: "<< inputF;

    v = new TxtViewer(inputF,*SMfile);
    setCentralWidget(v);
    this->activateWindow();
}

void ViewerWindow::closeit(){
//Function to close window of VW
    this->close();
}

void ViewerWindow::setF(QString inputF){
//Function to put result of SM
    *SMfile=inputF;
}

ViewerWindow::~ViewerWindow()
{
    delete ui;
}

