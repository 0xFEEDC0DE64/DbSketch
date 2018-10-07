# DbSketch
DbSketch git module for use in DbSoftware (https://github.com/0xFEEDC0DE64/DbSoftware)

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
./bin/serialserver
```
