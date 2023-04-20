#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define ll long long

void  oddDivisor( )
{

    int tt;
    cin>>tt;
    while(tt--)
    {
        ll n;
        cin>>n;
        while(n%2==0)
            n/=2;
        if(n>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    oddDivisor();

    return 0;

}

