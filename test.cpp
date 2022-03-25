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
	THuman human1("Mosyagin Maxim",2003,38210150);
	THuman human2("Michail Afonin", 2006, 38210456);
	THuman human3("Aleksandr Ibragimov", 2002, 38211234);
	TStudent student1("Aleksandr Ibragimov", 2002, 38211234, 2022, "IITMM");

	TInstitut institut;
	institut.AddHuman(&human1);
	institut.AddHuman(&human2);
	institut.AddHuman(&human3);
	institut.AddHuman(&student1);
	TStuff* stuff1 = new TStuff("Ben", 1999, 12931763, 12, 20, 5, 1000);
	//cout << human1.GetName() << endl;
	TStudent student("Mosyagin Maxim", 2003, 38210150, 2022, "IITMM");
	institut.AddHuman(stuff1);
	institut.Print();

	delete stuff1;

	return 0;
}