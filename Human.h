#pragma once

class THuman
{
public:
	THuman(const char* newName, int newYear, int newId);
	~THuman();
	const char* GetName();
	int GetYear();
	int GetId();
	void SetName(const char* newName);
	void SetYear(int ye);
	void SetId(int _id);
	void Print();
protected:
	int year;
	int id;
	char* name;
};