#include <limits.h>
#include "employee.h"
#include "employee.h"
#include "manager.h"
#include "gtest/gtest.h"

using namespace std;

TEST(EmployeeTest, NoExtraHours) {
  Employee *emplP;
  emplP = new Employee("Aydogan Karagoz", 1000.0);
  EXPECT_EQ(50, emplP->pay(8));
}

TEST(EmployeeTest, ExtraHours) {
  Employee *emplP;
  emplP = new Employee("Aydogan Karagoz", 1000.0);
  EXPECT_EQ(68.75, emplP->pay(10));
}

TEST(EmployeeTest, ExtraExtraHours) {
  Employee *emplP;
  emplP = new Employee("Aydogan Karagoz", 1000.0);
  EXPECT_EQ(78.125, emplP->pay(12));
}

TEST(ManagerTest, NoExtraHours) {
  Employee *emplP;
  emplP = new Manager("Aydogan Karagoz", 2000.0);
  EXPECT_EQ(100.0, emplP->pay(8));
}

TEST(ManagerTest, ExtraHours) {
  Employee *emplP;
  emplP = new Manager("Aydogan Karagoz", 2000.0);
  EXPECT_EQ(100.0, emplP->pay(10));
}

TEST(ManagerTest, ExtraExtraHours) {
  Employee *emplP;
  emplP = new Manager("Aydogan Karagoz", 2000.0);
  EXPECT_EQ(100.0, emplP->pay(12));
}
