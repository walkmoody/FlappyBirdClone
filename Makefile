all: compile link

compile:
	g++ -c main.cpp -I"C:\SFML-2.6.0\include" -DSFML_STATIC

link:
	g++ main.o -o main -LC:\SFML-2.6.0\lib -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows

clean:
	rm -f main *.o