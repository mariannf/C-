#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;


int main()
{
    int result, number1,userresult, number2;
for(int x=0; x<rand(); x++)
{


    srand(time(0));

    number1=rand();
    number2=rand();
    cout<<number1<<"+"<<number2<<endl;
    cout<<" enter the sum of the two ";
    cin>>userresult;

    result= number1+number2;

    if (userresult==result)
    {
        cout<<" great you can add two numbers.. way to go!!!";
        cout<<endl;

    }
    else
    {

        cout<<"\n maybe next time!!";
        cout<<"\nThe correct answer was: "<<result;
        cout<<endl;
    }

char uchoice;
cout<<" Do you wanna quit? y/n"<<endl;
cin>>uchoice;
if (uchoice=='y')
{
    break;
}

}


    return 0;
}
