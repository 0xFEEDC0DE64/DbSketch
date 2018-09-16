TEMPLATE = subdirs

SUBDIRS += sketchlib \
           sketchviewer

sketchviewer.depends += sketchlib
