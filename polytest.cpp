#include <iostream>
#include <string>
#include "employee.h"
#include "manager.h"
using namespace std;

void PrintPay(const Employee &empl,
              float hoursWorked);

int main()
{
  Employee *emplP;

  string title;
  string employeeName;
  float salary;
  float dailyHour;

  cout << "Employee Name, Surname: ";
  cin >> employeeName;

  cout << "Title/Role: ";
  cin >> title;

  cout << "Salary: ";
  cin >> salary;

  cout << "Daily Working hour: ";
  cin >> dailyHour;

  if (title == "Accounting" ||
      title == "Marketing" ||
      title == "Finance") 
  {
    emplP = new Employee(employeeName, salary);
  } else if (title == "GeneralManager" ||
             title == "ITManager " ||
             title == "ProcurementManager")
  {
    emplP = new Manager(employeeName, salary);
  } else {
    cerr << "Unrecognized kind of employee: " << title << "!" << endl;
    cout << "Valid kinds are:\n  -GeneralManager\n  -ITManager\n -Accounting\n  -Marketing\n  -Finance\n  -ProcurementManager\n";
    return 1;  // Exit program, returning error code.
  }


  cout << "\nUsing pay() method..." << endl;
  cout << employeeName<< endl;
  cout << "Pay: " << emplP->pay(dailyHour) << endl;

  return 0;
}
