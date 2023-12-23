# build the project and run the app
touch build
cmake -S Source -B build
cmake --build build --config=Debug
cd build/bin
./demoapplication JohnDow 44