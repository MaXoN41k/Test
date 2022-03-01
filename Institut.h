#pragma once

class TInstitut
{
public:
	TInstitut(char* inst);
	~TInstitut();
	char* GetInstitut();
protected:
	char* name;
};