#include "Workers.h"
#include <string.h>

TWorkers::TWorkers(const char* newName, int newYear, int newId, int sw, int fw, int kd, float cash, const char* work):
	TStuff(newName, newYear, newId, sw, fw, kd, cash)
{
	if (work != nullptr)
	{
		int l = strlen(work);
		working = new char[l + 1];
		for (int i = 0; i < l + 1; i++)
		{
			working[i] = work[i];
		}
	}
	else
	{
		working = "None";
	}
}

char* TWorkers::GetWork()
{
	return working;
}

void TWorkers::SetWork(const char* wrk)
{
	if (wrk != nullptr)
	{
		int o = strlen(wrk);
		working = new char[o + 1];
		for (int i = 0; i < o + 1; i++)
		{
			working[i] = wrk[i];
		}
	}
	else
	{
		working = "None";
	}
}

TWorkers::~TWorkers()
{
	if (working != nullptr)
	{
		delete[] working;
		working = nullptr;
	}
}
