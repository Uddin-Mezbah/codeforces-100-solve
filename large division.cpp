#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        string str;
        cin>>str;
        int n;
        cin>>n;
        int count=0;
        if(str[0]=='-')
        {
            count=1;

        }
        if(n<0)
        {
            n=n*(-1);
        }
        long prim =0;
        for(int j=count; j<str.size(); j++)
        {
            prim = (prim*10 + (str[j]-'0')) % n;
        }
        if(prim ==0)
        {
            cout<<"Case "<<i<<": divisible"<<endl;

        }
        else
        {
            cout<<"Case "<<i<<": not divisible"<<endl;
        }
    }

    return 0;

}
