#ifndef CUSTOMTEXTEDITS_H
#define CUSTOMTEXTEDITS_H

#include <QWidget>

namespace Ui {
class CustomTextEdits;
}

class CustomTextEdits : public QWidget
{
    Q_OBJECT

public:
    explicit CustomTextEdits(QWidget *parent = nullptr);
    ~CustomTextEdits();

private:
    Ui::CustomTextEdits *ui;
};

#endif // CUSTOMTEXTEDITS_H
