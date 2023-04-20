//upsolve
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void get_primefactor(ll n)
{
    cout<<n<<" =";
    if(n<0)
    {
        cout<<" "<<-1<<" x";
        n = abs(n);
    }
    while(n%2 ==0)
    {
        if(n==2)
        {
            cout<<" "<< 2 <<endl;
        }
        else
        {
            cout<<" "<< 2 <<" x";
        }
        n = n/2;
    }
    for(int i = 3;i<=sqrt(n); i=i + 2)
    {
        while(n%i ==0)
        {
            if(n==i)
            {
                cout<<" "<< i <<endl;
            }
            else
            {
                cout<<" "<< i <<" x";
            }
            n=n/i;
        }
    }
    if(n>2) cout<<" "<< n <<endl;

}

int main()
{

    ll n;
    while(true)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        get_primefactor(n);
    }

}



