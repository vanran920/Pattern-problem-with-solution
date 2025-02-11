#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int count = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int k = 1; k<=(n-i); k++)
        {
            cout<<" ";
        }
        for(int j = 1; j<=(i+count); j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        count = count + 1;
    }
    for(int i = n; i>=1; i--)
    {
        for(int k = 1; k<=(n-i); k++)
        {
            cout<<" ";
        }
        for(int j = 1; j<=((i*2) - 1); j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}