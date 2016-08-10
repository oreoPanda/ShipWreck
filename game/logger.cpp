/*
 * Logger.cpp
 *
 *  Created on: Aug 10, 2016
 *      Author: i_fly_gliders
 */

#include "logger.h"

using namespace std;

namespace logger
{
	void begin_err()
	{
		cout << "[Error] ";
	}

	void end_err()
	{
		cout << endl;
	}

	void begin_log()
	{
		cout << "[Notice] ";
	}

	void end_log()
	{
		cout << endl;
	}

	void begin_warn()
	{
		cout << "[Warning] ";
	}

	void end_warn()
	{
		cout << endl;
	}

} /* namespace game */
