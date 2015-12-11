#include <iostream>

using namespace std;

int main()
{
    double weight, priceOfShipment;

    cout<<"Enter the weight "<<endl;
    cin>>weight;

    if (weight<5)
        {
            priceOfShipment=3;
        }

    else if (weight>5 && weight<10)
        {
            priceOfShipment=((weight-5)*.25)+3;
        }
    else if(weight>10 && weight<15)
        {
            priceOfShipment=((weight-10)*.20)+5.50;
        }
    else
        {
            priceOfShipment=((weight-15)*.10)+8.50;
        }

        cout<<"the cost is"<<priceOfShipment<<endl;

    return 0;
}
