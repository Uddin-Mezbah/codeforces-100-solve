#include<bits/stdc++.h>
using namespace std;
#define eps le-6
#define LL Long Long
string s[128];
int n,i;
int main()
{

    //    freopen("input.txt","r",stdin);
   //    freopen("output.txt","w",stdout);
    cin>>n;
    for(i=0; i<n; ++i)cin>>s[i];
    sort(s,s+n);
    cout<<s[n/2];
}
