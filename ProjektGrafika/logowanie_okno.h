#ifndef LOGOWANIE_OKNO_H
#define LOGOWANIE_OKNO_H

#include <QDialog>
#include "listy.h"

namespace Ui {
class logowanie_okno;
}

class logowanie_okno : public QDialog
{
    Q_OBJECT

public:
    explicit logowanie_okno(QWidget *parent = nullptr);
    ~logowanie_okno();

private slots:
    void on_pushButton_L_clicked();

private:
    Ui::logowanie_okno *ui;
};

#endif // LOGOWANIE_OKNO_H
