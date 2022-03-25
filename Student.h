#pragma once
#include "Human.h"

class TStudent: public THuman
{
public:
	TStudent(const char* newName, int newYear, int newId, int newEnterYear, const char* fc);
	~TStudent();
	int GetYear();
	char* GetFaculty();
	void SetYear(int enty);
	void SetFaculty(const char* fcl);
	void Print();
protected:
	int enterYear;
	char* faculty;
};