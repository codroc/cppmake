rm -rf build/
cmake -B build -GNinja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_STANDARD=14
cmake --build build
