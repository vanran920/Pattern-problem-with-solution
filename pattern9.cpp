#include<bits/stdc++.h>
using namespace std;

int main()
{
    int countodd = 1;
    int counteven = 2;
    int number = 1;
    for(int i = 1; i<=8; i++)
    {
        for(int j = 1; j<=i; j++)
        {
               if((i%2)!=0)
               {
                  cout<<countodd--<<" ";
               }
               else
               {
                  cout<<counteven++<<" ";
               }
        }
        if((i%2)!=0)
        {
           countodd = countodd + (6*number);
           number = number + 1;
        }
        else
        {
           counteven = counteven + (i+1);
        }
        cout<<endl;
    }
}