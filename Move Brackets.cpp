#include<bits/stdc++.h>
using namespace std;
string s;
int t,n,i,x,ans;

#define eps le-6
#define ll long long

void getBracket()
{
     cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n,cin>>s,x=0,ans=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='(') x++;
            else if(x) x--;
            else ans++;
        }
        printf("%d\n",ans);
    }
}
int main()
{
   getBracket();
    return 0;
}
