prog:p.o main.o
	gcc -no-pie p.o main.o -o prog -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -g
chedi.o:p.c
	gcc -c p.c -g
