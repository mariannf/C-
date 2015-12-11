#include <iostream>

using namespace std;

int main()
{
    float quarters, dimes, nickels, pennies,totalAmount;


    cout<<"How many quarters do you have?"<<endl;
    cin>>quarters;

    cout<<"How many dimes do you have?"<<endl;
    cin>>dimes;

    cout<<"How may nickels do you have?"<<endl;
    cin>>nickels;

    cout<<"How many pennies do you have?"<<endl;
    cin>>pennies;

    totalAmount=(quarters*.25)+(dimes*.10)+(nickels*.05)+(pennies*.01);
    cout<<"You have :"<<totalAmount<<"dollars";


    return 0;
}
