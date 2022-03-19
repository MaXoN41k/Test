#pragma once
#include "Student.h"

class TOfline : public TStudent
{
public:
	TOfline(const char* newName, int newYear, int newId, int newEnterYear, const char* fc, const char* wk);
	char* GetWork();
	void SetWork(const char* wrk);
	~TOfline();
protected:
	char* work;
};
