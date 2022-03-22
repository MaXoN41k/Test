#pragma once
#include "Human.h" 

class TInstitut
{
public:
	TInstitut();
	~TInstitut();
	void print();
	void AddHuman(THuman* human);
protected:
	THuman** humans;
	int humanCount;
};