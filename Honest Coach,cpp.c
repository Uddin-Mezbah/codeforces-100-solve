#include<bits/stdc++.h>
#define eps le-6
#define LL Long Long
using namespace std;
 int ans=100000007;
void honestCoach()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);

        for(int i=1; i<n; i++)ans=min(ans,a[i]-a[i-1]);
        cout<<ans<<endl;
    }
}
int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
   honestCoach();
}
