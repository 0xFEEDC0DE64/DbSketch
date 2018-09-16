QT += core gui widgets

DBLIBS += quazip

PROJECT_ROOT = ../..

DEFINES += SKETCHLIB_LIBRARY

SOURCES += \
    basecontainer.cpp \
    containerfactory.cpp \
    layer.cpp \
    sketchfile.cpp \
    container/artboard.cpp \
    container/assetcollection.cpp \
    container/bitmap.cpp \
    container/blur.cpp \
    container/border.cpp \
    container/borderoptions.cpp \
    container/color.cpp \
    container/document.cpp \
    container/exportformat.cpp \
    container/exportoptions.cpp \
    container/fill.cpp \
    container/gradient.cpp \
    container/gradientstop.cpp \
    container/graphicscontextsettings.cpp \
    container/group.cpp \
    container/imagecollection.cpp \
    container/innershadow.cpp \
    container/msimmutableforeignsymbol.cpp \
    container/msjsonfilereference.cpp \
    container/oval.cpp \
    container/page.cpp \
    container/polygon.cpp \
    container/rect.cpp \
    container/rectangle.cpp \
    container/rulerdata.cpp \
    container/shadow.cpp \
    container/shapegroup.cpp \
    container/shapepath.cpp \
    container/sharedstyle.cpp \
    container/sharedstylecontainer.cpp \
    container/sharedtextstylecontainer.cpp \
    container/slice.cpp \
    container/style.cpp \
    container/symbolcontainer.cpp \
    container/symbolinstance.cpp \
    container/symbolmaster.cpp \
    container/text.cpp \
    container/textstyle.cpp \
    container/triangle.cpp

HEADERS += sketchlib_global.h \
    basecontainer.h \
    containerfactory.h \
    layer.h \
    sketchfile.h \
    container/artboard.h \
    container/assetcollection.h \
    container/bitmap.h \
    container/blur.h \
    container/border.h \
    container/borderoptions.h \
    container/color.h \
    container/document.h \
    container/exportformat.h \
    container/exportoptions.h \
    container/fill.h \
    container/gradient.h \
    container/gradientstop.h \
    container/graphicscontextsettings.h \
    container/group.h \
    container/imagecollection.h \
    container/innershadow.h \
    container/msimmutableforeignsymbol.h \
    container/msjsonfilereference.h \
    container/oval.h \
    container/page.h \
    container/polygon.h \
    container/rect.h \
    container/rectangle.h \
    container/rulerdata.h \
    container/shadow.h \
    container/shapegroup.h \
    container/shapepath.h \
    container/sharedstyle.h \
    container/sharedstylecontainer.h \
    container/sharedtextstylecontainer.h \
    container/slice.h \
    container/style.h \
    container/symbolcontainer.h \
    container/symbolinstance.h \
    container/symbolmaster.h \
    container/text.h \
    container/textstyle.h \
    container/triangle.h

FORMS +=

RESOURCES +=

TRANSLATIONS +=

include($${PROJECT_ROOT}/lib.pri)
