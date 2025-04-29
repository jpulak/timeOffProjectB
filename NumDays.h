// WRITE YOUR CODE HERE
// class definition for numdays

#ifndef NUMDAYS_H
#define NUMDAYS_H

// class func

class NumDays{

  //private varz

  private:
  double hours;

  //public funcs to expan on in cpp

  public:
  NumDays();
  NumDays(double h);
  void setHrs(double h); //setter
  double getHrs() const; //getter
  double getDays() const; //getter
};

#endif
