#include "manager.h"

Manager::Manager(string theName,
                 float thePayRate)
  : Employee(theName, thePayRate)
{
}

float Manager::pay(float hoursWorked) const
{
  return payRate / 20;
}
