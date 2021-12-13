#pragma once
#include "BaseTree.h"
#include "GroundSubSquare.h"

/*
* Inherited BaseTree
*/

class Oak : public BaseTree
{
public:
	Oak();
	Oak(GroundSubSquare location);
	virtual ~Oak() = default;
};
