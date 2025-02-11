#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 4;
    for(int i = 1; i<=num; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<j;
        }
        for(int k = 1; k<=((num+num)-(2*i)); k++)
        {
            cout<<" ";
        }
        for(int l = i; l>=1; l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    
}