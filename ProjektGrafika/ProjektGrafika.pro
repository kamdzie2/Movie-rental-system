QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dodaj_film.cpp \
    licz.cpp \
    listy.cpp \
    logowanie.cpp \
    logowanie_okno.cpp \
    main.cpp \
    mainwindow.cpp \
    ocena.cpp \
    ocena_okno.cpp \
    oddaj_film.cpp \
    op_na_listach.cpp \
    operacje_koncowe.cpp \
    rejestracja.cpp \
    rejestracja_okno.cpp \
    sortowanie.cpp \
    sortowanielwys.cpp \
    sortowanieocena.cpp \
    szukaj_filmu.cpp \
    wypozycz_film.cpp

HEADERS += \
    listy.h \
    logowanie_okno.h \
    mainwindow.h \
    ocena_okno.h \
    rejestracja_okno.h

FORMS += \
    logowanie_okno.ui \
    mainwindow.ui \
    ocena_okno.ui \
    rejestracja_okno.ui

TRANSLATIONS += \
    ProjektGrafika_pl_PL.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
