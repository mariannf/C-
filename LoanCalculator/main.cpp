#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   float  amountPaidBack, InterestPaid,mInterestrateToUse, totalPaid,numberOfPayment,monthlyInterestRate,annualInterestRate, totalInterestPaid, amountLoan, monthlyPayment;

   cout<<"\nEnter the Loan Amount: $";
   cin>>amountLoan;

   cout<<"\n\nEnter the annual Interest Rate:";
   cin>>annualInterestRate;

   cout<<"\n\nEnter the number of payments:";
   cin>>numberOfPayment ;


   monthlyInterestRate=(annualInterestRate/12);

   mInterestrateToUse=(monthlyInterestRate/100);


   monthlyPayment=mInterestrateToUse*(pow((1+mInterestrateToUse),(numberOfPayment)))/  (pow((1+mInterestrateToUse),(numberOfPayment))-1)*amountLoan;

    totalPaid=numberOfPayment*monthlyPayment;

    amountPaidBack=totalPaid+totalInterestPaid;


    totalInterestPaid=amountPaidBack-amountLoan;



   cout<< setprecision(2)<<fixed;
   cout<<left<<setw(15)<<"\n\nLoan Amount:"<<right<<setw(16)<<"$"<<amountLoan<<endl<<endl;
   cout<<left<<setw(20)<<"Monthly Interest Rate:"<<right<<setw(13)<<static_cast<int>(monthlyInterestRate)<<"%"<<endl<<endl;
   cout<<left<<setw(15)<<"Number of Payments:"<<right<<setw(17)<<static_cast<int>(numberOfPayment)<<endl<<endl;
   cout<<left<<setw(15)<<"Monthly Payment:"<<right<<setw(14)<<"$"<<monthlyPayment<<endl<<endl;
   cout<<left<<setw(15)<<"Amount Paid Back:"<<right<<setw(11)<<"$"<<amountPaidBack<<endl<<endl;
   cout<<left<<setw(15)<<"Interest Paid:"<<right<<setw(14)<<"$"<<totalInterestPaid<<endl<< endl;





    return 0;
}
