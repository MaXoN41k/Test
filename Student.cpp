#include "Student.h"

TStudent::TStudent(const char* newName, int newYear, int newId, int newEnterYear): 
	THuman(newName, newYear, newId)
{
	enterYear = newEnterYear;
}
