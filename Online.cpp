#include "Online.h"

TOnline::TOnline(const char* newName, int newYear, int newId, int newEnterYear, const char* fc, int sst, int fst):
	TStudent(newName, newYear, newId, newEnterYear, fc)
{
	startStudy = sst;
	finishStudy = fst;
}

int TOnline::GetStartStudy()
{
	return startStudy;
}

int TOnline::GetFinishStudy()
{
	return finishStudy;
}

void TOnline::SetStartStudy(int st)
{
	if (st > 0 && st <= 24)
	{
		startStudy = st;
	}
	else
	{
		startStudy = 0;
	}
}

void TOnline::SetFinishStudy(int ft)
{
	if (ft > 0 && ft <= 24 && ft > startStudy)
	{
		finishStudy = ft;
	}
	else
	{
		finishStudy = 0;
	}
}


