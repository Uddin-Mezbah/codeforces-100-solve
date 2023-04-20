//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n,m;
//    cin>>n>>m;
//
//    if(n>=m)
//    {
//        cout<<"Malvika"<<endl;
//    }
//    else if(n<m)
//    {
//        cout<<"Akshat"<<endl;
//
//    }
//    else{
//        cout<<"Malvika"<<endl;
//
//    }
//}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p;
    cin>>n>>m;
    if(n>m)
        p=m-1;
    else
        p=n-1;
    if(p%2==0)
        cout<<"Akshat";
    else
        cout<<"Malvika";
}
