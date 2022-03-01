#include <iostream>
#include "Institut.h"
#include "Human.h"
#include "Student.h"
using namespace std;

int main()
{
	TInstitut institut("IITMM");
	cout << institut.GetInstitut() << endl;
	THuman human("Zabotin Maxim",2003,38210150);
	cout << human.GetName() << endl;
	TStudent student("Zabotin Maxim", 2003, 38210150, 2021);
	return 0;
}