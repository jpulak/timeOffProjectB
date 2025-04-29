//execution of all the classes and cpp files
// do not touch

#include <iostream>
#include "TimeOff.h"
using namespace std;

int main()
{
   TimeOff test("George Smith", 1423, 80, 40, 200, 100, 200, 8);

   cout << "Name: " << test.getName() << endl;
   cout << "ID: " << test.getEmpNum() << endl << endl;

   cout << "Max Sick Hours: " << test.getMaxSick() << endl;
   cout << "Sick Hours taken: " << test.getSickTaken() << endl;
   cout << "Sick Days taken: " << test.getSickTakenDays() << endl << endl;

   cout << "Max Vacation Hours: " << test.getMaxVacation() << endl;
   cout << "Vacation Hours taken: " << test.getVacationTaken() << endl;
   cout << "Vacation Days taken: " << test.getVacationTakenDays() << endl << endl;

   cout << "Max Unpaid Hours: " << test.getMaxUnpaid() << endl;
   cout << "Unpaid Hours taken: " << test.getUnpaidTaken() << endl;
   cout << "Unpaid Days taken: " << test.getUnpaidTakenDays() << endl << endl;

   return 0;
}
