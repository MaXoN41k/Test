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

void TInstitut::Print()
{
	for (int i = 0; i < humanCount; i++)
	{
		humans[i]->Print();
	}
}

void TInstitut::AddHuman(THuman* human)
{
	if (humanCount == 0)
	{
		humans = new THuman*[1];
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
		delete[] humans;
		humans = t;
		humans[humanCount] = human;
		humanCount++;

	}
}


