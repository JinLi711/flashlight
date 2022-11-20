cd project && mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -Dflashlight_DIR=/opt/flashlight/share/flashlight/cmake
make -j$(nproc)

cmake .. -Dflashlight_DIR=/opt/flashlight/share/flashlight/cmake


https://medium.com/@onur.dundar1/cmake-tutorial-585dd180109b