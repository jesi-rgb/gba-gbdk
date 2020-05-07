all:
	/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -c -o bin/main.o src/main.c
	/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -o game/main.gba bin/main.o

LIBS	:= -lmm -lgba
