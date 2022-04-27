#pragma once

#include <iostream>

class Fireball {
	public:
		Fireball();
		~Fireball();
		virtual ASpell *clone() const;


};
