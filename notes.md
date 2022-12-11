cd project && mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -Dflashlight_DIR=/opt/flashlight/share/flashlight/cmake
make -j$(nproc)

cmake .. -Dflashlight_DIR=/opt/flashlight/share/flashlight/cmake


https://medium.com/@onur.dundar1/cmake-tutorial-585dd180109b

cd /Users/jinli/Work/projects/flashlight/.devcontainer
docker build -t flashlight .
docker run -itd --name flashlight -v /Users/jinli/Work/projects/flashlight:/flashlight flashlight
docker exec -it flashlight bash



cmake .. \
    -DCMAKE_BUILD_TYPE=Release \
    -DFL_BUILD_ARRAYFIRE=ON \
    -DCMAKE_TOOLCHAIN_FILE=/flashlight/vcpkg/scripts/buildsystems/vcpkg.cmake

# install MKL

cd /tmp && wget https://apt.repos.intel.com/intel-gpg-keys/GPG-PUB-KEY-INTEL-SW-PRODUCTS-2019.PUB && \
    sudo apt-key add GPG-PUB-KEY-INTEL-SW-PRODUCTS-2019.PUB && \
    sudo sh -c 'echo deb https://apt.repos.intel.com/mkl all main > /etc/apt/sources.list.d/intel-mkl.list' && \
    sudo apt-get update && \
    sudo apt install intel-mkl-64bit-2020.4-912


# Install other packages

```

./vcpkg/vcpkg install intel-mkl fftw3 kenlm arrayfire[cpu] gloo[mpi] openmpi onednn cereal stb gflags glog libsndfile gtest 
```
# Make project

```
cd project && mkdir build && cd build
cmake .. \
  -DCMAKE_TOOLCHAIN_FILE=/flashlight/vcpkg/scripts/buildsystems/vcpkg.cmake \
  -DCMAKE_BUILD_TYPE=Release
make -j$(nproc)
```