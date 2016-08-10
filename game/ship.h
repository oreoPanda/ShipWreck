/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * ship.h
 * Copyright (C) 2016 Jonas <legojonas@gmx.de>
 *
 * shipwreck is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * shipwreck is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _SHIP_H_
#define _SHIP_H_

#include <string>

using namespace std;

namespace game
{
/*class: Ship
 * A ship has a length, a name and a hit count.
 * It can be placed into the ocean and fired upon.*/
class Ship
{
public:
	 Ship(unsigned int length, string name);
	 ~Ship();
	 unsigned int get_length();
	 string get_name();
	 bool hit();
protected:

private:
	 unsigned int length;
	 string name;
	 unsigned int hit_count;
};
}

#endif // _SHIP_H_

