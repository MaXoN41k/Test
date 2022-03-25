#pragma once
#include "Student.h"

class TOnline : public TStudent
{
public:
	TOnline(const char* newName, int newYear, int newId, int newEnterYear, const char* fc, int sst, int fst);
	int GetStartStudy();
	int GetFinishStudy();
	void SetStartStudy(int st);
	void SetFinishStudy(int ft);
protected:
	int startStudy;
	int finishStudy;
};