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
