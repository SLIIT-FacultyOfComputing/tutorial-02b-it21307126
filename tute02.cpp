/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 

   switch (etype) {
  double salary, netSalary;
  int etype, otHrs, otRate;

  std::cout << "Enter Employee Type : ";
  std::cin >> etype;

  std::cout << "Enter Salary  : ";
  std::cin >> salary;

  std::cout << "Enter OtHrs : ";
  std::cin >> otHrs;

 switch (etype) {
      case 1 :
          otRate = 1000;
          break;
@@ -36,9 +40,10 @@ int main()
          break;
   }

netSalary = salary + otHrs* otRate;
std::cout << "Net Salary is " << netSalary;



   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);

   return 0;
return 0;
}
