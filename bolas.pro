######################################################################
# Automatically generated by qmake (3.1) Sun Feb 14 17:39:39 2021
######################################################################

TEMPLATE = app
TARGET = bolas
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += bola.h \
           darbolbolas.h \
           dchart.h \
           dcontrolbolas.h \
           dinfobolas.h \
           dinfohijas.h \
           dinformacion.h \
           dtablabolas.h \
           dtablainfo.h \
           mainwindow.h \
           widgetbola.h \
           widgetbolatabla.h
FORMS += darbolbolas.ui \
         dchart.ui \
         dcontrolbolas.ui \
         dinfobolas.ui \
         dinfohijas.ui \
         dtablabolas.ui \
         dtablainfo.ui \
         widgetbola.ui \
         widgetbolatabla.ui
SOURCES += bola.cpp \
           darbolbolas.cpp \
           dchart.cpp \
           dcontrolbolas.cpp \
           dinfobolas.cpp \
           dinfohijas.cpp \
           dinformacion.cpp \
           dtablabolas.cpp \
           dtablainfo.cpp \
           main.cpp \
           mainwindow.cpp \
           widgetbola.cpp \
           widgetbolatabla.cpp
QT += widgets charts
CONFIG += warn_off
