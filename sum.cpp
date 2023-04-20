#include<bits/stdc++.h>
using namespace std;

void getSum(int t)
{
     for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b==c) || (b+c==a) || (a+c==b)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main()
{
    int t;
    cin>>t;
    getSum(t);

}
