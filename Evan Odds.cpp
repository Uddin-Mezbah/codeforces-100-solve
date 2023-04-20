#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b;
    c=(a+1)/2;
    if(c<b)
    {
        cout<<(b-c)*2;
    }
    else
    {
        cout<<1+(b-1)*2;
    }
}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    long long a,b,c;
//    cin>>a>>b;
//    c = (a+1)/2;
//    if(b<c)
//    {
//        cout<<(b-c)*2;
//    }
//    else{
//        cout<<1+(b-1)*2;
//    }
//}
