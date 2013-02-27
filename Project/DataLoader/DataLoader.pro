# -------------------------------------------------
# Project created by QtCreator
# -------------------------------------------------
QT += gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataLoader
DESTDIR = ../../BIN/DataLoader
OBJECTS_DIR = ../../BIN/DataLoader/.obj
MOC_DIR = ../../BIN/DataLoader/.moc
RCC_DIR = ../../BIN/DataLoader/.rcc
UI_DIR = ../../BIN/DataLoader/.ui

TEMPLATE = app

########################### Warning options #####################################

QMAKE_CXXFLAGS_WARN_ON += -Werror
QMAKE_CXXFLAGS_WARN_ON += -Wno-reorder
#################################################################################

INCLUDEPATH += "../../"

LIBS += -L"/usr/externallib/lib/"
INCLUDEPATH += "/usr/externallib/include/"
QMAKE_CXXFLAGS += -isystem "/usr/externallib/include/"

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

SOURCES += ../../SRC/mainDataLoader.cpp \
           ../../SRC/Generator/DataType/point.cpp \
           ../../SRC/Generator/DataType/vector.cpp \
           ../../SRC/Generator/DataType/point3d.cpp \
           ../../SRC/Generator/DataType/vector3d.cpp

HEADERS += ../../SRC/Generator/DataType/point.h \
           ../../SRC/Generator/DataType/vector.h \
           ../../SRC/Generator/DataType/point3d.h \
           ../../SRC/Generator/DataType/vector3d.h

#FORMS += ../../SRC/DataLoader/Forms/*.ui
