/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * ship.cc
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

#include "ship.h"

using namespace game;
using namespace std;

/*Constructor
 * Arguments:
 *  length
 *	  - the length of the ship. This is equal to the maximum
 *		number of times the ship can be hit.
 *	name
 *	  - the name of the ship
 * Description: Creates an object of Ship
 * Tags: none
 */
Ship::Ship(unsigned int length, string name)
	:length(length), name(name), hit_count(0)
{
	
}

/*get_name()
 * Arguments: none
 * Description: Get the name of the ship.
 * Returns: The name of the ship as a string.
 * Tags: no-free
 */
string Ship::get_name()
{
	return this->name;
}

/*hit()
 * Arguments: none
 * Description: This function should be called to hit the ship.
 *				If the hit count is not already equal to the length of the ship,
 *				it is incremented.
 * Returns: true if the ship is alive, false if it sank
 * Tags: no-free
 */
bool Ship::hit()
{
	if(this->hit_count < this->length)
	{
		this->hit_count++;
	}
	if(this->hit_count == this->length)
	{
		return false;
	}
	else return true;
}

