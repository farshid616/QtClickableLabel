#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->label, SIGNAL(doubleClicked()),
            this, SLOT(onLabelDoubleClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLabelDoubleClicked()
{
    QMessageBox::information(this,"Clicked","You Double Clicked on Label!", QMessageBox::Ok);
}
