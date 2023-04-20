#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define LL Long Long

void printCandis(int t)
{

    while(t--)
    {
        int i, p,n;
        cin>>n;
        p=3;
        while(n%p>0) p=1+2*p;
        cout<<n/p<<"\n";
    }

}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    printCandis(t);

    return 0;

}
