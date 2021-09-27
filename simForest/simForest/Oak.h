#pragma once
#include "BaseTree.h"
#include "GroundSquare.h"

/*
* Inherited BaseTree
*/

class Oak : public BaseTree
{
public:
	Oak();
	Oak(GroundSquare location);
};
