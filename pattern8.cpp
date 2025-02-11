#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k = 4;
    int count = 1;
    for(int i = 1; i<=k; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            if(i == j)
            {
                cout<<count++;
            }
            else
            {
                cout<<count++<<"*";
            }
        }
        cout<<endl;

    }
    for(int i = k; i>=1; i--)
    {
        int l = count - i;
        for(int j = 1; j<=i; j++)
        {
            if(i == j)
            {
                cout<<l++;
            }
            else
            {
                cout<<l++<<"*";
            }
        }
        count = l - i;
        cout<<endl;
    }
}