#include "stdafx.h"
#include "mainwindow.h"
#include <engine/types/qpyint.h>
#include <engine/types/qpycomplex.h>
#include <engine/types/qpytuple.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowClass())
{
    ui->setupUi(this);
    Py_Initialize();
    
    QPyComplex c1(12.9, 100.0);
    QPyComplex c2(0.0, 0.0);
    QPyTuple tuple = { c1,c2 };
    qDebug() << tuple;


    Py_Finalize();
}

MainWindow::~MainWindow()
{
    delete ui;
}
