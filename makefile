main.out:main.o
g++ -o main.out main.o 

main.o:main.cpp Mino.cpp genMino.cpp MinoI.cpp MinoO.cpp MinoL.cpp MinoT.cpp MinoS.cpp Mino.hpp genMino.hpp MinoI.hpp MinoO.hpp MinoL.hpp MinoT.hpp MinoS.hpp
	g++ main.cpp 