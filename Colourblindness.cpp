#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string x,y;
    cin>>t;
    while(t)
    {
        t--;
        cin>>n>>x>>y;
        int bj=0;
        for(int i=0; i<n; i++)
        {
            if(x[i]=='R'&&y[i]!='R')	bj=1;
            if(x[i]=='G'&&y[i]=='R')	bj=1;
            if(x[i]=='B'&&y[i]=='R')	bj=1;
        }
        if(bj)	cout<<"NO"<<endl;
        else 	cout<<"YES"<<endl;
    }
    return 0;
}
