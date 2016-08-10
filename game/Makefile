#Makefile

#Copyright (C) 2016 Jonas Fuglsang-Petersen

#chatnut is free software: you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation, either version 3 of the License, or
#(at your option) any later version.

#chatnut is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.

#You should have received a copy of the GNU General Public License
#along with chatnut.  If not, see <http://www.gnu.org/licenses/>.

CC = g++
objects-debug = main-debug.o ship-debug.o ocean-debug.o
objects = main.o ship.o ocean.o
cflags = -Wall -Wextra

game: $(objects)
	echo "Linking "$(objects)
	$(CC) $(objects) -o $@ $(libs)

game-debug: $(objects-debug)
	echo "Linking "$(objects-debug)
	$(CC) $(objects-debug) -o $@ $(libs)

%.o: %.cpp
	echo "Compiling "$<
	$(CC) -c $< -o $@ $(cflags)

%-debug.o: %.cpp
	echo "Compiling "$<" for debugging"
	$(CC) -c $< -o $@ $(cflags) -g

clean:
	echo "Removing executable"
	rm -f game
	rm -f game-debug
	echo "Removing objects"
	rm -f *.o
	echo "Removing temporary files created by gedit"
	rm -f *~

# $@: target
# $<: first prerequisite
#  %: any string (%.o is any string with ending.o)
