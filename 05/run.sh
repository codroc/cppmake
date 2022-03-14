rm build/CMakeCache.txt
cmake -B build -GNinja -DCMAKE_MODULE_PATH=/usr/share/cmake-3.13/Modules
cmake --build build
