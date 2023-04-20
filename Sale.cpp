#include<bits/stdc++.h>
using namespace std;

#define eps le-6
#define ll long long

void saless()
{
    ll a[1000],n,m,i,s;
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<m && a[i]<0; i++)
        s=s+a[i];
    cout<<-s;


}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);



//    int n,m;
//
//    cin >> n,m;

    //getFancy(n);
    saless();

}
