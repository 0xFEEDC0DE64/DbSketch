# DbSketch
DbSketch git module for use in DbSoftware (https://github.com/0xFEEDC0DE64/DbSoftware)

[![Build Status](https://travis-ci.org/0xFEEDC0DE64/DbSketch.svg?branch=master)](https://travis-ci.org/0xFEEDC0DE64/DbSketch) [![Codacy Badge](https://api.codacy.com/project/badge/Grade/f4c38fdf78074658ba8c9449f8971594)](https://www.codacy.com/app/0xFEEDC0DE64/DbSketch?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=0xFEEDC0DE64/DbSketch&amp;utm_campaign=Badge_Grade)

## Building from source
This project can only be built as part of the project structure [DbSoftware](https://github.com/0xFEEDC0DE64/DbSoftware)

```Shell
git clone https://github.com/0xFEEDC0DE64/DbSoftware.git
cd DbSoftware
git submodule update --init --recursive 3rdparty/Quazip DbSketch
cd ..
mkdir build_DbSoftware
cd build_DbSoftware
qmake CONFIG+=ccache ../DbSoftware
make -j$(nproc) sub-DbSketch
make sub-DbSketch-install_subtargets
./bin/sketchviewer
```
