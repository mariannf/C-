#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char addition, multiplication, sign;
    int numb1, numb2, valueN;

    addition = '+';
    multiplication = '*';

    numb1 = numb1 % 10;
    numb2 = numb2 % 10+1;
    cout<<" enter + for addition or * for multiplication ";
    cin >> sign;


     if (sign == addition)
     {
        cout << numb1 << " + " << numb2 << endl;
        cout << " enter the solution! " << endl;



     cin >> valueN;


        if (valueN = numb1 + numb2)
            {
                cout << "*** correct ***";
            }
        else
            {
                cout << "*** Incorrect ***";
            }
     }

        if(sign == multiplication)
        {
            cout << numb1 << " * " << numb2 << endl;
            cout << " enter the solution! " << endl;


        cin >> valueN;

            if ( valueN = numb1 * numb2)
            {
                cout << "*** correct ***";
            }
        else
        {
            cout << "*** incorrect ***";
        }
        }
return 0;




}
