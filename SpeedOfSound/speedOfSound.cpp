/* Program:speedOfSound.cpp
    Author:Mariann Szabo-Freund
    Lab Section: L21
    Date: 7/24/2012
    Purpose:This program will calculate the time it will take the sound to travel in the choosen medium.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Defining variables
    char choice;
    double distanceSound, timeAmount;

    //Display the menu and get a choice from user

    cout<<"\t\t Speed of Sound Menu"<<endl<<endl;
    cout<<"Choose the medium, in which the sound travels."<<endl<<endl;

    cout<<"\t A \t Air "<<endl;
    cout<<"\t W \t Water"<<endl;
    cout<<"\t S \t Steel"<<endl<<endl;
    cin>>choice;

    //set the numeric output
    cout<<fixed<<showpoint<<setprecision(4);
    //Respond to the user's menu selection
    switch (choice)
    {
        case 'a':
        case 'A':

            cout<<" Enter the distance in feet : "<<endl;
            cin>>distanceSound;

        if (distanceSound<0)
        {
            cout<<" Invalid distance! \n Run the program again!"<<endl;
        }
        else
        {
            timeAmount=(distanceSound/1100);
            cout<<" It will take "<<timeAmount<<" seconds to travel "<<(int)distanceSound<<" feet in Air. "<<endl;
        }

        break;

        case 'w':
        case 'W':

            cout<<"Enter the distance in feet :"<<endl;
            cin>>distanceSound;

        if (distanceSound<0)
        {
            cout<<" Invalid distance! \n Run the program again!"<<endl;
        }
        else
        {
            timeAmount=(distanceSound/4900);
            cout<<" It will take "<<timeAmount<<" seconds to travel "<<(int)distanceSound<<" feet in Water. "<<endl;
        }

        break;

        case 's':
        case 'S':

            cout <<" Enter the distance in feet :"<<endl;
            cin>>distanceSound;

        if (distanceSound<0)
        {
            cout<<" Invalid distance! \n Run the program again!"<<endl;
        }
        else

        {
            timeAmount=(distanceSound/16400);
            cout<<" It will take "<<timeAmount<<" second to travel "<<(int)distanceSound<<" feet in Steel."<<endl;
        }

        break;

        default:
            cout<<" \n\t The program choices are A for Air, W for Water or S for Steel."<<endl;
            cout<<" \t Run the program again!"<<endl;
    }






    return 0;
}
