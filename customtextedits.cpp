#include "customtextedits.h"
#include "ui_customtextedits.h"

CustomTextEdits::CustomTextEdits(QWidget *parent):
    QWidget(parent),
    ui(new Ui::CustomTextEdits)
{
    ui->setupUi(this);
    setBaseSize(sizeHint());
}

CustomTextEdits::~CustomTextEdits()
{
    delete ui;
}
