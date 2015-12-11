/** Program:internetSubscription.cpp
    Author:Mariann Szabo-Freund
    Lab Section: L21
    Date: 7/24/2012
    Purpose:This program calculates the customer's monthly bill.
**/
#include <iostream>

using namespace std;

int main()
{   //Define variables.
    char packPurchased;
    int hoursUsed, remainder;
    double monthlyBill;


    //Display the menu and get the choice.
    cout<<"\t\t Internet packages Menu\n\n";
    cout<<"\t A,    for $9.95/month 10 hours of access provided\n";
    cout<<"\t B,    for $14.95/month 20 hours of access provided \n";
    cout<<"\t C,    for $19.95/month unlimited access provided\n\n";
    cout<<"Enter your choice:";
    cin>>packPurchased;



    //Respond to user's menu selection using switch statements
    switch (packPurchased)
        {
            case 'A':
            case 'a':

            //Ask user for hours used
            cout<<"How may hours have you used?";
            cin>>hoursUsed;
            //using if, else if statements to control  and display the price
            if(hoursUsed<0 ||hoursUsed >744)
                {
                    cout<<"You entered invalid hours !!"<<endl;
                }


            else if (hoursUsed>=0 && hoursUsed<=10)
                {
                    monthlyBill=9.95;
                    cout<<"Total amount is: $"<<monthlyBill<<endl;

                }
            else
                {
                    remainder=hoursUsed-10;
                    monthlyBill=9.95+(remainder*2);
                    cout<<"Total amount is: $"<<monthlyBill<<endl;
                }

            break;


            case'B':
            case'b':


            cout<<"How may hours have you used?";
            cin>>hoursUsed;

            if(hoursUsed<0 ||hoursUsed >744)
                {
                    cout<<"You entered invalid hours !!"<<endl;
                }

            else if (hoursUsed<=20 )
                {
                    monthlyBill=14.95;
                    cout<<"Total amount is: $"<<monthlyBill<<endl;
                }
            else
                {
                    remainder=hoursUsed-20;
                    monthlyBill=14.95+remainder*1;
                    cout<<"Total amount is: $"<<monthlyBill<<endl;
                }

            break;


            case'C':
            case'c':


            cout<<"How may hours have you used?";
            cin>>hoursUsed;

            if(hoursUsed<0 ||hoursUsed >744)
                {
                    cout<<"You entered invalid hours !!"<<endl;
                }
            else
                {
                    monthlyBill=19.95;
                    cout<<"Total amount is: $"<<monthlyBill<<endl;
                }

            break;

            default:

            cout<<" \t\t The valid choices are A, B or C"<<endl;
            cout<<"\t\t Run the program again!"<<endl;
        }





    return 0;
}
