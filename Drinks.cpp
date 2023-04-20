//#include<bits/stdc++.h>
//using namespace std;
//
//void drinkJuce(int n)
//{
//    double a,y,i,b,x;
//    cin>>a;
//    for (i=0; i<n; i++)
//    {
//        cin>>b;
//        y +=b;
//    }
//    cout<<y/a;
//}
//
//
//int main()
//{
//
//    double n;
//    cin>>n;
//    //double arr[n];
//    for(int i=0; i<n; i++)
//    {
//        int b;
//        cin>>b;
//    }
//    drinkJuce(n);
//    return 0;
//}

#include <iostream>
using namespace std;

main()
{
    double n,y,b,x;
cin>>n;
for (int i=0;i<n;i++)
{
cin>>b;
y +=b;
}
cout<<y/n;
}

