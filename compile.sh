make .
cp libJ118.a driver
cd driver
g++ test.cpp -I ../include -l J118 -L . -o test -std=c++11 -l pthread -l J118
