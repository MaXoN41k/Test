#pragma once
#include "Staff.h"

class TWorkers :public TStuff
{
public:
	TWorkers(const char* newName, int newYear, int newId, int sw, int fw, int kd, float cash, const char* work);
	char* GetWork();
	void SetWork(const char* wrk);
	~TWorkers();
protected:
	char* working;
};