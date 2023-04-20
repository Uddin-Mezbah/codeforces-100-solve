//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//string s;
//cin>>s;
//sort(s.begin(),s.end());
//
//s=string(s.begin(),unique(s.begin(),s.end()));
//if(s.size()%2==0)
//	cout<<"CHAT WITH HER!";
//else
//	cout<<"IGNORE HIM!" ;
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());

    str=string(str.begin(),unique(str.begin(),str.end()));

    if(str.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }


}
