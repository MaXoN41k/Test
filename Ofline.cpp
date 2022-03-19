#include <string.h>
#include "Ofline.h"

TOfline::TOfline(const char* newName, int newYear, int newId, int newEnterYear, const char* fc, const char* wk):
	TStudent(newName, newYear, newId, newEnterYear, fc)
{
	if (wk != nullptr)
	{
		int x = strlen(wk);
		work = new char[x + 1];
		for (int i = 0; i < x + 1; i++)
		{
			work[i] = wk[i];
		}
	}
	else
	{
		work = "None";
	}
}

char* TOfline::GetWork()
{
	return work;
}

void TOfline::SetWork(const char* wrk)
{
	if (wrk != nullptr)
	{
		int y = strlen(wrk);
		work = new char[y + 1];
		for (int i = 0; i < y; i++)
		{
			work[i] = wrk[i];
		}
	}
	else
	{
		work = "None";
	}
}

TOfline::~TOfline()
{
	if (work != nullptr)
	{
		delete[] work;
		work = 0;
	}
}
