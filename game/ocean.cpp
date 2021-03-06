/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * ocean.cc
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

#include "ocean.h"

using namespace game;
using namespace logger;

/*Constructor
 * Arguments: none
 *	name
 *	  - the name of the ship
 * Description: Creates an object of Ocean and initializes every pointer
 *				in the grid to NULL;
 * Tags: none
 */
Ocean::Ocean()
{
	for(int x = 0; x < 10; x++)
	{
		for(int y = 0; y < 10; y++)
		{
			grid[x][y] = NULL;
		}
	}
}

/*fit()
 * Arguments:
 *  length
 *	  - the length of the ship. This is equal to the maximum
 *		number of times the ship can be hit.
 *	name
 *	  - the name of the ship
 * Description: Checks if the ship would fit into the grid in the specified way.
 * Returns: true if the ship would fit, false if it wouldn't fit
 * Tags: no-free
 */
bool Ocean::fit(Shiptype t, int x, int y, Rotation r)
{
	if(x < 0 || x >= 10 || y < 0 || y >= 10)
	{
		return false;
	}
	switch(r)
	{
		case UP:
		{
			for(int i = 0; i < t; i++)
			{
				if( (y-i) < 0 || this->grid[x][y-i] != NULL)
				{
					return false;
				}
			}
			break;
		}
		case RIGHT:
		{
			for(int i = 0; i < t; i++)
			{
				if( (x+i) >= 10 || this->grid[x+i][y] != NULL)
				{
					return false;
				}
			}
			break;
		}
		case DOWN:
		{
			for(int i = 0; i < t; i++)
			{
				if( (y+i) >= 10 || this->grid[x][y+i] != NULL)
				{
					return false;
				}
			}
			break;
		}
		case LEFT:
		{
			for(int i = 0; i < t; i++)
			{
				if( (x-i) < 0 || this->grid[x-i][y] != NULL)
				{
					return false;
				}
			}
			break;
		}
		default:
		{
			begin_err();
			cout << "Cannot fit ship with invalid rotation.";
			end_err();
			return false;
		}
	}

	return true;
}

Ocean::~Ocean()
{

}

