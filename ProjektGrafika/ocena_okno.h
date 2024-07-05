#ifndef OCENA_OKNO_H
#define OCENA_OKNO_H

#include <QDialog>
#include "listy.h"

namespace Ui {
class ocena_okno;
}

class ocena_okno : public QDialog
{
    Q_OBJECT

public:
    explicit ocena_okno(QWidget *parent = nullptr);
    ~ocena_okno();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_1_clicked();

private:
    Ui::ocena_okno *ui;
    lista* lista2;
};

#endif // OCENA_OKNO_H
