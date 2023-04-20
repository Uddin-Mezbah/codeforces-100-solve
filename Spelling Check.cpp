//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n;
//        string s;
//        cin>>n;
//        cin>>s;
//
//        sort(s.begin(),s.end());
//        if(s=="Timru")
//        {
//            cout<<"Yes"<<endl;
//        }
//        else
//        {
//            cout<<"No"<<endl;
//        }
//
//    }
//
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;

        sort(s.begin(),s.end());
        if(s=="Timru")
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
