#include "Staff.h"

TStuff::TStuff(const char* newName, int newYear, int newId, int sw, int fw, int kd, float cash) :
	THuman(newName,newYear,newId)
{
	startWork = sw;
	finishWork = fw;
	days = kd;
	moneys = cash;
}

int TStuff::GetStart()
{
	return startWork;
}

int TStuff::GetFinish()
{
	return finishWork;
}

int TStuff::GetDays()
{
	return days;
}

float TStuff::GetMoney()
{
	return moneys;
}

void TStuff::SetStart(int swo)
{
	if (swo > 0 && swo <= 24)
	{
		startWork = swo;
	}
	else
	{
		startWork = 0;
	}
}

void TStuff::SetFinish(int fwo)
{
	if (fwo > 0 && fwo <= 24 && fwo > startWork)
	{
		finishWork = fwo;
	}
	else
	{
		finishWork = 0;
	}
}

void TStuff::SetDays(int day)
{
	if (day > 0 && day <= 7)
	{
		days = day;
	}
	else
	{
		days = 0;
	}
}

void TStuff::SetMoneys(float mon)
{
	if (mon > 0 && mon < 500000)
	{
		moneys = mon;
	}
	else
	{
		moneys = 0;
	}
}
