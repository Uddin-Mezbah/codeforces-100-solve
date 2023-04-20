#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define LL long long

void Suvset()
{
    LL n,i,a[10000],t;
    cin>>t;
    while(t--)
    {
        {
            cin>>n;
            for(i=1; i<=n; i++)
                cin>>a[i];
            sort(a+1,a+1+n);
        }
        cout<<a[n]-a[1]<<endl;
    }
}
int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    Suvset();
}
