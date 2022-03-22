#include "Institut.h"

TInstitut::TInstitut()
{
	humanCount = 0;
	humans = nullptr;
}

TInstitut::~TInstitut()
{
	if (humans != nullptr)
	{
		delete[] humans;
	}
}

void TInstitut::print()
{
	for (int i = 0; i < humanCount; i++)
	{
		humans[i]->print();
	}
}

void TInstitut::AddHuman(THuman* human)
{
	if (humanCount == 0)
	{
		humans = new THuman * [1];
		humanCount = 1;
		humans[0] = human;
	}
	else
	{
		THuman** t = new THuman * [humanCount + 1];
		for (int i = 0; i < humanCount; i++)
		{
			t[i] = humans[i];
		}
		delete[] human;
		humans = t;
		humans[humanCount] = human;
		humanCount++;
	}
}


