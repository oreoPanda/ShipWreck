
#Makefile

all:
	cd game && make --quiet game
	cd gui && make --quiet gui

default:
	cd game && make --quiet game
	cd gui && make --quiet gui

debug:
	cd game && make --quiet game-debug
	cd gui && make --quiet gui-debug

clean:
	rm -f *~
	rm -f .*~
	cd game && make --quiet clean
	cd gui && make --quiet clean
