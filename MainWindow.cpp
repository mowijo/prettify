#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionConvert, &QAction::triggered, [=]()
    {
        QString s = ui->textBrowser->document()->toPlainText();
        ui->textBrowser->setText("<b>"+s+"</b>");
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
