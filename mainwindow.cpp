#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::About);
    connect(ui->actionWave_viewer, &QAction::triggered, this, &MainWindow::ShowGraph);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::About()
{
    DialogAbout* about = new DialogAbout(this);
    about->setModal(true);
    about->show();
}

void MainWindow::ShowGraph()
{
    Plot* plot = new Plot(this);
    plot->setWindowModality(Qt::WindowModality::ApplicationModal);
    plot->show();
}

