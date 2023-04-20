#include<bits/stdc++.h>
#define f(i,x,y) for(int i=x;i<=y;i++)
#define df(i,x,y) for(int i=x;i>=y;i--)
#define int long long
#define pb push_back
#define F first
#define S second
#define ll long long
#define string s
#define m mezbah(cse)
using namespace std;
const int N=1.1e6;
int n,cs,x,y,s,t,as,o[N];
pair<int,int>a[N];
char c[N];
vector<int>b;
signed main()
{
    scanf("%lld",&cs);
    for(int i=0;i<cs;i++)
    {
        scanf("%lld%s",&n,c+1);
        f(i,0,25)a[i].F=o[i]=0,a[i].S=i;
        f(i,1,n)++a[c[i]-'a'].F;
        sort(a,a+26);
        reverse(a,a+26);
        s=n,t=1;
        f(i,1,min(n,26ll))if(n%i==0)
        {
            as=0;
            f(j,0,i-1)if(a[j].F<n/i)as+=n/i-a[j].F;
            if(as<s)s=as,t=i;
        }
        cout<<s<<'\n';
        f(j,0,t-1)
        {
            f(i,a[j].F+1,n/t)b.pb(a[j].S+'a');
            o[a[j].S]=n/t;
        }
        f(i,1,n)if(o[c[i]-'a'])cout<<c[i],--o[c[i]-'a'];
        else printf("%c",b.back()),b.pop_back();
        cout<<'\n';
    }
    return 0;
}
