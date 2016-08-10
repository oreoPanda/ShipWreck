/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * ocean.h
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

#ifndef _OCEAN_H_
#define _OCEAN_H_

#include "logger.h"
#include "ship.h"

namespace game
{

/*An enum that defines the types of ships
 * and their lengths.
 */
typedef enum
{
	 CRUISER = 3,
	 CARRIER = 5
 }Shiptype;

/*An enum that defines the four rotations a ship can have
 * in the grid.
 */
typedef enum
{
	UP,
	RIGHT,
	DOWN,
	LEFT
}Rotation;

/*The Ocean class. The Ocean is a 10 by 10 grid of ship pointers.
 * Ships can be placed into the ocean with the add function.
 * If you just want to know if a ship would fit at a certain position,
 * call the fit function.
 * When a ship is added, the ship pointers at its place in the grid
 * will point at it.
 * You can shoot at a point of the grid with the shoot function.
 */
class Ocean
{
public:
	 
	 Ocean();
	 ~Ocean();
	 bool fit(Shiptype t, int x, int y, Rotation r);
	 void add(Shiptype t, int x, int y, Rotation r);
	 bool shoot(int x, int y);
protected:

private:
	 Ship *grid[10][10];
};
}

#endif // _OCEAN_H_

