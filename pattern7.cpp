#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if((i == 1) || (i == n) )
            {
                cout<<"*";
            }
            else if((i+j) == (n + 1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}