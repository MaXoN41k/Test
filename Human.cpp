#include "Human.h"
#include <string.h>

THuman::THuman(const char* newName, int newYear, int newId)
{
	year = newYear;
	id = newId;
	if (newName != nullptr)
	{
		int n = strlen(newName);
		name = new char[n + 1];
		for (int i = 0; i < n + 1; i++)
		{
			name[i] = newName[i];
		}
	}
	else
	{
		name = nullptr;
	}
}

THuman::~THuman()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}

const char* THuman::GetName()
{
	return name;
}

int THuman::GetYear()
{
	return year;
}

int THuman::GetId()
{
	return id;
}
