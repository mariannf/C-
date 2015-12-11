/*
    Program:pizzaIP.cpp
    Author:Mariann Szabo-Freund
    Lab Section: L21
    Date: 7/13/2012
    Purpose: Calculates the number of Pizza needed per customers order based on requested size.
*/


#include <iostream>
#include <cmath> //needed for the power and ceiling functions


using namespace std;

int main()
{
    const double PI=3.14159;  //
    float diameterOfPizza, radiusOfPizza, wholePizza;  //Define variables as float.
    float numberOfSlices,numberOfPeople,areaNeeded, areaOfPizza;
    int finalPizza;  //Define variable as int

    //Ask the user for the Pizza's Size
    cout << "What is the diameter of the pizza?";
    cin>>diameterOfPizza;  //Read the diameter of the pizza.


    //Calculate the numbers of Pizza needed
    radiusOfPizza=diameterOfPizza/2;        //Calculates the radius of the pizza.
    areaOfPizza=PI*pow(radiusOfPizza,2);    //Calculates the area of the pizza.
    numberOfSlices=areaOfPizza/14.125;      //Calculates the number of slices.

    cout<<"\nYou have " << numberOfSlices << "slices of pizza.";  //Display the number of slices

    cout<<"How many people are going to be at the party?";
    cin>>numberOfPeople;  //Read the number of people.

    numberOfSlices=numberOfPeople*4;    //Calculates the number of slices for people
    areaNeeded=numberOfSlices*14.125;   //Calculates the area what needed for the number of people.
    wholePizza=areaNeeded/areaOfPizza;  //Calculating the number of whole pizzas needed
    finalPizza=ceil(wholePizza);        //using ceiling funcion for rounding up





    cout<<"\nYou will need "<< wholePizza <<"pizza!"<<endl;    //Display the number of pizzas in float

    cout<<"\nyou will need "<<finalPizza<<"pizza!"<<endl;      //Displays the number of pizzas rounded




    return 0;
}
