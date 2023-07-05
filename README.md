# SFML-Practice
Commands to build statically and dynamically are provided.

# Running

## Makefile run
To compile
```
g++ -c main.cpp -I"SFML-2.6.0\include"
```

Create runnable exe
```
g++ main.o -o main -L"SFML-2.6.0\lib" -lsfml-graphics -lsfml-window -lsfml-system
```

If make is installed on your device then run the following command

```
make
```
To get rid of the main.o file run
```
make clean
```

# Scripts
### Static build
```
.\static.bat
```
### Dynamic build
```
.\dynamic.bat
```
### Remove main.o
```
.\clean.bat
```

# Dependencies
Install of SMFL is required to run the program.

https://www.sfml-dev.org/download.php

Make sure to place the folder into the C drive or replace the location in the run/compile commands.
