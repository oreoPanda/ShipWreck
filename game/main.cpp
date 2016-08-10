/*main.cpp*/

#include <iostream>
#include "ocean.h"

using namespace std;
using namespace game;

int main()
{
	/*Test case for Ocean::fit() (change the zero to a one to compile it)*/
#if 0
	cout << "Testing Ocean::fit()" << endl;

	Ocean *o = new Ocean();
	bool fits = false;

	//carrier in upper left corner, pointing right
	//should work
	fits = o->fit(CARRIER, 0, 0, RIGHT);
	cout << fits << endl;

	//carrier in upper left corner, pointing left
	//shouldn'y work
	fits = o->fit(CARRIER, 0, 0, LEFT);
	cout << fits << endl;

	//carrier in lower left corner, pointing up
	//should work
	fits = o->fit(CARRIER, 0, 9, UP);
	cout << fits << endl;

	//carrier in lower left corner, pointing down
	//shouldn'y work
	fits = o->fit(CARRIER, 0, 9, DOWN);
	cout << fits << endl;

	//FIXME there should be a valgrind leak error because I forgot to delete o

	/*END Test case for Ocean::fit()*/
#endif

#if 0
	/*Test case for the logger (by using the fit function)*/

	Ocean o;
	o.fit(CARRIER, 0, 0, (Rotation)5);
#endif

	return 0;
}

