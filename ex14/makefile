weight: main.o weightFuncs.o
	g++ -Wall -g main.o weightFuncs.o -o weight

main.o: main.cpp weightFuncs.hpp
	g++ -Wall -g -c main.cpp

weightFuncs.o: weightFuncs.cpp weightFuncs.hpp
	g++ -Wall -g -c weightFuncs.cpp
