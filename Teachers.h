#pragma once
#include "Staff.h"

class TTeachers : public TStuff
{
public:
	TTeachers(const char* newName, int newYear, int newId, int sw, int fw, int kd, float cash, int grc, const char* kurat);
	~TTeachers();
protected:
	int groupCount;
	char* groupKurator;
};