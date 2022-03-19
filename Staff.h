#pragma once
#include "Human.h"

class TStuff : public THuman
{
public:
	TStuff(const char* newName, int newYear, int newId, int sw, int fw, int kd, float cash);
	int GetStart();
	int GetFinish();
	int GetDays();
	float GetMoney();
	void SetStart(int swo);
	void SetFinish(int fwo);
	void SetDays(int day);
	void SetMoneys(float mon);
protected:
	int startWork;
	int finishWork;
	int days;
	float moneys;
};