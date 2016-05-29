#ifndef _MANAGER_H
#define _MANAGER_H

#include "employee.h"
using namespace std;

class Manager : public Employee {
public:
  Manager(string theName,
          float thePayRate);

  virtual float pay(float hoursWorked) const;

};

#endif /* not defined _MANAGER_H */
