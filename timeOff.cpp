// WRITE YOUR CODE HERE
// function within class of TimeOff

#include "TimeOff.h"

//constructor - follow input style from main proj file

TimeOff::TimeOff(string name, int num, double maxSickHrs, double sickHrs, double maxVacayHrs, double vacayHrs, double maxUnpayedHrs, double unpayedHrs){
  
  //identification func set 'employee’s name and identification number'

  employeeName = name;
  employeeNum = num; 

  //sick funcs set 'maxSickDays sickTaken '
  maxSick.setHrs(maxSickHrs);
  sickTaken.setHrs(sickHrs);

  //vacay funcs set 'maxVacation vacTaken '
  // input vlaidation from instructions 'not accumulate more than 240 hours'

  if (maxVacayHrs > 240){
    maxVacayHrs = 240;
  }
  maxVac.setHrs(maxVacayHrs);
  vacTaken.setHrs(vacayHrs);

  //unpay func set 'maxUnpaid maxUnpaid '

  maxUnpay.setHrs(maxUnpayedHrs);
  unpayTaken.setHrs(unpayedHrs);
}

//getters
//identification getters 

string TimeOff::getName() const{
  return employeeName;
}
int TimeOff::getEmpNum() const{
  return employeeNum;
}

//sick funcs getters 

double TimeOff::getMaxSick() const{
  return maxSick.getHrs();
}
double TimeOff::getSickTaken() const{
  return sickTaken.getHrs();
}
double TimeOff::getSickTakenDays() const{
  return sickTaken.getDays();
}

//vacation funcs getters 

double TimeOff::getMaxVacation() const{
  return maxVac.getHrs();
}
double TimeOff::getVacationTaken() const{
  return vacTaken.getHrs();
}
double TimeOff::getVacationTakenDays() const{
  return vacTaken.getDays();
}

//unpaid funcs getters 

double TimeOff::getMaxUnpaid() const{
  return maxUnpay.getHrs();
}
double TimeOff::getUnpaidTaken() const{
  return unpayTaken.getHrs();
}
double TimeOff::getUnpaidTakenDays() const{
  return unpayTaken.getDays();
}

