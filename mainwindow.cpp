#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "customtextedits.h"

#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listView->setStyleSheet("QListView::item { height: 100px; }");

    QStandardItemModel *model = new QStandardItemModel(120, 1);
    ui->listView->setModel(model);

    for (int r = 0; r < 120; r++)
    {
        ui->listView->setIndexWidget(model->index(r, 0), new CustomTextEdits);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
