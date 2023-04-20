//#include<iostream>
//using namespace std;
//int main()
//{
//    string x,l="hello";
//    cin>>x;
//    int j=0;
//    for(int i=0; i<x.size(); i++)
//    {
//        if(x[i]==l[j])j++;
//    }
//
//    if(j>=5)cout<<"YES";
//
//    else cout<<"NO";
//
//}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    string chat = "hello";
    cin>>str;

    int mang = 0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==chat[mang])
            mang++;
    }
    if(mang>=5)
        cout<<"YES";
    else{
        cout<<"NO";
    }
}
