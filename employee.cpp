#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string theName, float thePayRate)
{
  name = theName;
  payRate = thePayRate;
}

Employee::~Employee() {}

float Employee::pay(float hoursWorked) const
{
  float hourlyRate;
  // assume 1 month: 20 days, 1 day: 8 hours
  hourlyRate = payRate / (20 * 8);

  if (hoursWorked <= 0.0)
  {
    return 0;
  }
  if (hoursWorked < 8.0)
  {
    return hoursWorked * hourlyRate;
  }
  else
  {
    float extraHours;
    float dailyRate;
    extraHours = hoursWorked - 8;

    if (extraHours > 3)
    {
      extraHours = 3; 
    }
    dailyRate = 8 * hourlyRate;
    dailyRate += extraHours * hourlyRate * 1.5;
    return dailyRate;
  }
}
