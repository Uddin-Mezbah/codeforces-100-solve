#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define ll long long

void kthDivisable(int t)
{
    for(int i=0;i<t;i++)
    {
        ll n,k ;
        cin>>n>>k;
        cout<<(k-1)/(n-1)+k<<endl;
    }
}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    kthDivisable(t);


    return 0;

}

