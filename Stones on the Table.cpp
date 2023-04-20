#include"bits/stdc++.h"

using namespace std;
main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0;
    for(int i=0; i<n-1; i++)
    {
        if(str[i]==str[i+1]) ans++;
    }
    cout<<ans<<endl;
}

//#include<iostream>
//using namespace std;
//main()
//{
//    int n, c=0;
//    cin>>n;
//    string s;
//    cin>>s;
//    for(int i=0; i<n-1; i++)
//    {
//        if(s[i]==s[i+1]) c++;
//    }
//    cout<<c;
//}
