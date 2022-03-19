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

void TStudent::SetYear(int enty)
{
	if (enty > 2010 && enty < 2022)
	{
		enterYear = enty;
	}
	else
	{
		enterYear = 0;
	}
}

void TStudent::SetFaculty(const char* fcl)
{
		if (fcl != nullptr)
		{
			int z = strlen(fcl);
			faculty = new char[z + 1];
			for (int i = 0; i < z + 1; i++)
			{
				faculty[i] = fcl[i];
			}
		}
		else
		{
			faculty = nullptr;
		}
}
