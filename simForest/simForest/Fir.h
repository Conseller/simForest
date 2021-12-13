
#pragma once
#include "BaseTree.h"
#include "GroundSubSquare.h"

/*
* Inherited BaseTree
*/

class Fir : public BaseTree
{
public:
	Fir();
	Fir(GroundSubSquare location);
	~Fir() = default;
};
