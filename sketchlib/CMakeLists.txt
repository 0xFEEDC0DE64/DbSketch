find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Gui CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)

set(HEADERS
    basecontainer.h
    containerfactory.h
    layer.h
    sketchfile.h
    sketchlib_global.h
    container/artboard.h
    container/assetcollection.h
    container/bitmap.h
    container/blur.h
    container/border.h
    container/borderoptions.h
    container/color.h
    container/document.h
    container/exportformat.h
    container/exportoptions.h
    container/fill.h
    container/gradient.h
    container/gradientstop.h
    container/graphicscontextsettings.h
    container/group.h
    container/imagecollection.h
    container/innershadow.h
    container/msimmutableforeignsymbol.h
    container/msjsonfilereference.h
    container/oval.h
    container/page.h
    container/polygon.h
    container/rectangle.h
    container/rect.h
    container/rulerdata.h
    container/shadow.h
    container/shapegroup.h
    container/shapepath.h
    container/sharedstylecontainer.h
    container/sharedstyle.h
    container/sharedtextstylecontainer.h
    container/slice.h
    container/style.h
    container/symbolcontainer.h
    container/symbolinstance.h
    container/symbolmaster.h
    container/text.h
    container/textstyle.h
    container/triangle.h
)

set(SOURCES
    basecontainer.cpp
    containerfactory.cpp
    layer.cpp
    sketchfile.cpp
    container/artboard.cpp
    container/assetcollection.cpp
    container/bitmap.cpp
    container/blur.cpp
    container/border.cpp
    container/borderoptions.cpp
    container/color.cpp
    container/document.cpp
    container/exportformat.cpp
    container/exportoptions.cpp
    container/fill.cpp
    container/gradient.cpp
    container/gradientstop.cpp
    container/graphicscontextsettings.cpp
    container/group.cpp
    container/imagecollection.cpp
    container/innershadow.cpp
    container/msimmutableforeignsymbol.cpp
    container/msjsonfilereference.cpp
    container/oval.cpp
    container/page.cpp
    container/polygon.cpp
    container/rectangle.cpp
    container/rect.cpp
    container/rulerdata.cpp
    container/shadow.cpp
    container/shapegroup.cpp
    container/shapepath.cpp
    container/sharedstylecontainer.cpp
    container/sharedstyle.cpp
    container/sharedtextstylecontainer.cpp
    container/slice.cpp
    container/style.cpp
    container/symbolcontainer.cpp
    container/symbolinstance.cpp
    container/symbolmaster.cpp
    container/text.cpp
    container/textstyle.cpp
    container/triangle.cpp
)

add_library(sketchlib SHARED ${HEADERS} ${SOURCES})

target_compile_definitions(sketchlib PRIVATE SKETCHLIB_LIBRARY)

target_link_libraries(sketchlib Qt5::Core Qt5::Gui Qt5::Widgets quazip)

target_include_directories(sketchlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_dependencies(sketch sketchlib)
