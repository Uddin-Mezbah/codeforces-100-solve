#include<bits/stdc++.h>
using namespace std;

void luckyCandis(int t)
{
    for(int i=0;i<t;i++)
    {
        char a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if(a+b+c==d+e+f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    luckyCandis(t);

    return 0;
}
