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
	THuman human2("Aleksandr Ibragimov", 2002, 38211234);
	human1.SetName("Mihail");
	TInstitut institut;
	institut.AddHuman()
	cout << human1.GetName() << endl;
	TStudent student("Mosyagin Maxim", 2003, 38210150, 2022, "IITMM");


	return 0;
}