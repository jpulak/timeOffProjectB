# timeOffProjectB
11.TimeOff CS1337
You must have completed Project A to do this projec
Design a class named TimeOff . The purpose of the class is to track an employee’s sick leave, vacation, and unpaid time off. It should have, as members, the followinginstances of the NumDays class described in Project A of Numdays:
maxSickDays A NumDays object that records the maximum number of days of sick leave the employee may take.
sickTaken A NumDays object that records the number of days of sick leave the employee has already taken.
maxVacation A NumDays object that records the maximum number of days of paid vacation the employee may take.
vacTaken A NumDays object that records the number of days of paid vacation the employee has already taken.
maxUnpaid A NumDays object that records the maximum number of days of unpaid vacation the employee may take.
unpaidTaken A NumDays object that records the number of days of unpaid leave the employee has taken.
Additionally, the class should have members for holding the employee’s name and identification number. It should have an appropriate constructor and member functions for storing and retrieving data in any of the member objects.
Input Validation: Company policy states that an employee may not accumulate more than 240 hours of paid vacation. The class should not allow the maxVacation object to store a value greater than this amount.
Input for the program is:
```
TimeOff test("George Smith", 1423, 80, 40, 200, 100, 200, 8);
```
Please do not change/modify the TimeOffProjectB.cpp
OUTPUT IS AS FOLLOWS:
```
Name: George Smith
ID: 1423

Max Sick Hours: 80
Sick Hours taken: 40
Sick Days taken: 5

Max Vacation Hours: 200
Vacation Hours taken: 100
Vacation Days taken: 12.5

Max Unpaid Hours: 200
Unpaid Hours taken: 8
Unpaid Days taken: 1
```
