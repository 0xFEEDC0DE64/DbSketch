#pragma once

#include <QtGlobal>

#if defined(SKETCHLIB_LIBRARY)
#  define SKETCHLIB_EXPORT Q_DECL_EXPORT
#else
#  define SKETCHLIB_EXPORT Q_DECL_IMPORT
#endif
