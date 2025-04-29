// WRITE YOUR CODE HERE
// cpp for numdays class funcation definitions

#include "NumDays.h"

//defining functions

NumDays::NumDays(){
  hours = 0;
}
NumDays::NumDays(double h){
  hours = h;
}

//define setter/getter functions

void NumDays::setHrs(double h){
  hours = h; //set
}
double NumDays::getHrs() const{
  return hours; //get
}
double NumDays::getDays() const{
  return hours/8.0; //get
}
