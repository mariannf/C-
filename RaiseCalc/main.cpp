#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double oldSalary, newSalary, percentRaised, raiseOfNewSalary;

   cout<<" what is the amount of your old salary ";
   cin>> oldSalary;

   cout<<" What is the percent of raise ";
   cin>> percentRaised;

   raiseOfNewSalary=oldSalary*(percentRaised*.01);
   newSalary=oldSalary+raiseOfNewSalary;

   cout<<left<<setw(20)<<" Amount of raise "<<right<<setw(5)<<raiseOfNewSalary<<"%"<<endl;
   cout<<left<<setw(20)<<" The new Salary is "<<right<<setw(5)<<newSalary;
    return 0;
}
