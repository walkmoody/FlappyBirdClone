g++ -c main.cpp -I"SFML-2.6.0\include" -DSFML_STATIC
g++ main.o -o main -L"SFML-2.6.0\lib" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows
del main.o
.\main.exe