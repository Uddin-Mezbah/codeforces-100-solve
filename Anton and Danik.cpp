//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,i,j;
//    cin>>n;
//    string s;
//    cin>>s;
//    i=count(s.begin(),s.end(),'D');
//    j=count(s.begin(),s.end(),'A');
//    if(i>j)
//        cout<<"Danik";
//    else if(i<j)
//        cout<<"Anton";
//    else
//        cout<<"Friendship";
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int antony = count(str.begin(),str.end(),'D');
    int danial = count(str.begin(),str.end(),'A');

    if(antony>danial)
    {
        cout<<"Danik";
    }
     else if(antony<danial)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Friendship";
    }

}
