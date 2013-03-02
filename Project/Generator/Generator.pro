# -------------------------------------------------
# Project created by QtCreator
# -------------------------------------------------
QT += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Generator
DESTDIR = ../../BIN/Generator
OBJECTS_DIR = ../../BIN/Generator/.obj
MOC_DIR = ../../BIN/Generator/.moc
RCC_DIR = ../../BIN/Generator/.rcc
UI_DIR = ../../BIN/Generator/.ui

TEMPLATE = app

########################### Warning options #####################################

QMAKE_CXXFLAGS_WARN_ON += -Werror
QMAKE_CXXFLAGS_WARN_ON += -Wno-reorder
#################################################################################

INCLUDEPATH += "../../"

LIBS += -lboost_serialization
LIBS += -lboost_iostreams
LIBS += -lboost_graph
LIBS += -lboost_chrono
LIBS += -lboost_date_time
LIBS += -lboost_exception
LIBS += -lboost_filesystem
LIBS += -lboost_locale
LIBS += -lboost_math_c99
LIBS += -lboost_math_tr1
LIBS += -lboost_random
LIBS += -lboost_system
LIBS += -lboost_timer
LIBS += -lboost_thread

SOURCES += ../../SRC/mainGenerator.cpp \
           ../../SRC/Generator/DataType/*.cpp

HEADERS += ../../SRC/Generator/DataType/*.h

#FORMS += ../../SRC/Generator/Forms/*.ui
