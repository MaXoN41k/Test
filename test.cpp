#include <iostream>
#include "Institut.h"
#include "Human.h"
#include "Student.h"
using namespace std;

int main()
{
	TInstitut institut("IITMM");
	cout << institut.GetInstitut() << endl;
	THuman human("Mosyagin Maxim",2003,38210150);
	cout << human.GetName() << endl;
	TStudent student("Mosyagin Maxim", 2003, 38210150, 2022);
	return 0;
}