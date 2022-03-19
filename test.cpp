#include <iostream>
#include "Institut.h"
#include "Human.h"
#include "Student.h"
#include "Staff.h"
#include "Teachers.h"
#include "Workers.h"
#include "Online.h"
#include "Ofline.h"
using namespace std;

int main()
{
	TInstitut institut("IITMM");
	cout << institut.GetInstitut() << endl;
	THuman human("Mosyagin Maxim",2003,38210150);
	human.SetName("Mihail");
	cout << human.GetName() << endl;
	TStudent student("Mosyagin Maxim", 2003, 38210150, 2022, "IITMM");
	return 0;
}