#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k = 5;
    for(int i = 1; i<=k; i++)
    {
        for(int s = 1; s<=(k-i); s++)
        {
            cout<<" ";
        }
        for(int j = 1; j<=i; j++)
        {
            cout<<j;
        }
        for(int k = (i-1); k>0; k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
}