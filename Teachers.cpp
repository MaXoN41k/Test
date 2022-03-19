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

int TTeachers::GetGroupCount()
{
	return groupCount;
}

char* TTeachers::GetGroupKurat()
{
	return groupKurator;
}

void TTeachers::SetGroupCount(int count)
{
	if (count > 0)
	{
		groupCount = count;
	}
	else
	{
		groupCount = 0;
	}
}

void TTeachers::SetGroupKurat(const char* kur)
{
	if (kur != nullptr)
	{
		int k = strlen(kur);
		groupKurator = new char[k + 1];
		for (int i = 0; i < k + 1; i++)
		{
			groupKurator[i] = kur[i];
		}
	}
	else
	{
		groupKurator = "None";
	}
}

TTeachers::~TTeachers()
{
	if (groupKurator != nullptr)
	{
		delete[] groupKurator;
		groupKurator = nullptr;
	}
}


