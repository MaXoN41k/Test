#pragma once

class THuman
{
public:
	THuman(const char* newName, int newYear, int newId);
	~THuman();
	const char* GetName();
	int GetYear();
	int GetId();
protected:
	int year;
	int id;
	char* name;
};