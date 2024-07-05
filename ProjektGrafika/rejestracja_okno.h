#ifndef REJESTRACJA_OKNO_H
#define REJESTRACJA_OKNO_H

#include <QDialog>
#include "listy.h"

namespace Ui {
class rejestracja_okno;
}

class rejestracja_okno : public QDialog
{
    Q_OBJECT

public:
    explicit rejestracja_okno(QWidget *parent = nullptr);
    ~rejestracja_okno();

private slots:
    void on_pushButton_R_clicked();

private:
    Ui::rejestracja_okno *ui;
};

#endif // REJESTRACJA_OKNO_H
