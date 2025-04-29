// WRITE YOUR CODE HERE
// timeoff class definition

#ifndef TIMEOFF_H
#define TIMEOFF_H
#include <string>
#include "NumDays.h" //use class funcation of numdays
using namespace std;

// class definition

class TimeOff{

  //private vars

  private:
  string employeeName;
  int employeeNum;
  NumDays maxSick;
  NumDays sickTaken;
  NumDays maxVac;
  NumDays vacTaken;
  NumDays maxUnpay;
  NumDays unpayTaken;

  //public functions to expan on in cpp

  public:
  TimeOff(string name, int num, double maxSick, double sick, double maxVacay, double vacay, double maxUnpayed, double unpayed);
  
  //emp identification

  string getName() const;
  int getEmpNum() const;
  
  //sick funcs

  double getMaxSick() const;
  double getSickTaken() const;
  double getSickTakenDays() const;

  //vac funcs

  double getMaxVacation() const;
  double getVacationTaken() const;
  double getVacationTakenDays () const;

  //unpay funcs

  double getMaxUnpaid() const;
  double getUnpaidTaken() const;
  double getUnpaidTakenDays() const;
};

#endif
