
rem - clone code
rem git clone https://github.com/brinkqiang2cpp/cpp_redis.git
rem pushd cpp_redis
rem git submodule update --init --recursive

rmdir /S /Q build
mkdir build
pushd build
cmake -A x64 -DCMAKE_BUILD_TYPE=relwithdebinfo ..
cmake --build .
popd

rem pause