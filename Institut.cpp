#include "Institut.h"
#include <string.h>

TInstitut::TInstitut(char* inst)
{
	if (inst != nullptr)
	{
		int n = strlen(inst);
		name = new char[n+1];
		for (int i = 0; i < n+1; i++)
		{
			name[i] = inst[i];
		}
	}
	else
	{
		name = 0;
	}
}
TInstitut::~TInstitut()
{
	if (name != 0)
	{
		delete[] name;
		name = 0;
	}
}
char* TInstitut::GetInstitut()
{
	return name;
}