// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 6;
//     for(int i = n; i>=1; i--)
//     {
//         int c = n ;
//         int l = 0;
//         for(int j = 1; j<=(i*n); j++)
//         {
//             cout<<c<<" ";
//             l = l + 1;
//             if(l == i)
//             {
//                 c = c - 1;
//                 l = 0;
//             }
//         }
//         cout<<endl;
//     }
// }

// vector<int> printPat(int n) 
//     {
//         // write code here
//     int num = n;
//     vector<int> pattern;
//     for(int i = num; i>=1; i--)
//     {
//         int c = num ;
//         int l = 0;
//         for(int j = 1; j<=(i*num); j++)
//         {
//             pattern.push_back(c);
//             l = l + 1;
//             if(l == i)
//             {
//                 c = c - 1;
//                 l = 0;
//             }
//         }
//         pattern.push_back(-1);
//     }
//     return pattern;
//     }