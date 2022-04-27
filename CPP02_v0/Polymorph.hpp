#pragma once

#include <iostream>


class Polymorph {
	public:
		Polymorph();
		virtual ~Polymorph();



		virtual ASPell *clone() const = 0;
};

