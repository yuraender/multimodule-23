﻿# build the project and run the app
mkdir build # But this is not required
cmake -S source -B build
cmake --build build --config Debug
cd build/bin
./demoapplication JohnDow 44