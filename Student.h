#pragma once
#include "Human.h"

class TStudent: public THuman
{
public:
	TStudent(const char* newName, int newYear, int newId, int newEnterYear);
protected:
	int enterYear;
};