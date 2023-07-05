g++ -c main.cpp -I"SFML-2.6.0\include"
g++ main.o -o main -L"SFML-2.6.0\lib" -lsfml-graphics -lsfml-window -lsfml-system
del main.o
.\main.exe