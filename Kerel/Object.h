#pragma once
#include "Types/vector3.h"
class Object
{
public:
	Object();
	virtual unsigned int getID() const = 0;

protected:
	unsigned int ID;
};