#include "Student.h"
#include <string.h>

TStudent::TStudent(const char* newName, int newYear, int newId, int newEnterYear, const char* fc): 
	THuman(newName, newYear, newId)
{
	enterYear = newEnterYear;
	if (fc != nullptr)
	{
		int m = strlen(fc);
		faculty = new char[m + 1];
		for (int i = 0; i < m + 1; i++)
		{
			faculty[i] = fc[i];
		}
	}
	else
	{
		faculty = nullptr;
	}
}

TStudent::~TStudent()
{
	if (faculty != 0)
	{
		delete[] name;
		name = 0;
	}
}

int TStudent::GetYear()
{
	return enterYear;
}

char* TStudent::GetFaculty()
{
	return faculty;
}
