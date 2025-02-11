#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k = 8;
    for(int i = 1; i<=k; i++)
    {
        for(int j = 1; j<=(k*2) + 1; j++)
        {
             if(i == j)
             {
                cout<<i;
             }
             else if((i+j) == (k+k))
             {
                cout<<i;
             }
             else
             {
                cout<<" ";
             }

        }
        cout<<endl;
    }
    for(int i = (k-1); i>=1; i--)
     {
         for(int j = 1; j<=(k*2) + 1; j++)
        {
             if(i == j)
             {
                cout<<i;
             }
             else if((i+j) == (k + k))
             {
                cout<<i;
             }
             else
             {
                cout<<" ";
             }

        }
        cout<<endl;
    }
    

}