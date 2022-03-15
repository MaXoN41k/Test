#include "Teachers.h"
#include <string.h>

TTeachers::TTeachers(const char* newName, int newYear, int newId, int sw, int fw, int kd, float cash, int grc, const char* kurat):
	TStuff(newName, newYear, newId, sw, fw, kd, cash)
{
	groupCount = grc;
	if (kurat != nullptr)
	{
		int s = strlen(kurat);
		groupKurator = new char[s + 1];
		for (int i = 0; i < s + 1; i++)
		{
			groupKurator[i] = kurat[i];
		}
	}
	else
	{
		groupKurator = nullptr;
	}
}

TTeachers::~TTeachers()
{
}


