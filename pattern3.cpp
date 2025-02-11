#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 1; i<=7 ; i++)
    {
        int count = i;
        for(int j = 1; j<=i; j++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}