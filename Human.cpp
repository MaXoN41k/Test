#include "Human.h"
#include <string.h>
#include <iostream>

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

void THuman::SetName(const char* newName)
{
	if (newName != nullptr)
	{
		int t = strlen(newName);
		name = new char[t + 1];
		for (int i = 0; i < t + 1; i++)
		{
			name[i] = newName[i];
		}
	}
	else
	{
		name = nullptr;
	}
}

void THuman::SetYear(int ye)
{
	if (ye > 1920 && ye < 2022)
	{
		year = ye;
	}
	else
	{
		year = 0;
	}
}

void THuman::SetId(int _id)
{
	id = _id;
}

void THuman::Print()
{
	std::cout << "name:" << name << std::endl;
	std::cout << "year:" << year << std::endl;
	std::cout << "id:" << id << std::endl << std::endl;
}
