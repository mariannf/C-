
#include <iostream>

using namespace std;

int main()
{
   double rainfallAmnt[2][12];
   int y;
   int m;
   for (y=0; y<2;  y++)
   {
       for(m=0; m<12; m++)
       {
       cout<<"enter the amount of rain for year"<<y+1<<" month"<<m+1;
       cin>>rainfallAmnt[y][m];
       }
   }

int total=0;
    for(m=0; m<12; m++)
    {
        for(y=0; y<2; y++)
        {
            if (m==2)
           {

            total+=rainfallAmnt[y][m];
           }
        }
    }
        cout<<"The amount of rain in March is"<<total;



    return 0;
}
