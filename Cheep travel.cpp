#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<min(n*a,n/m*b+min(b,n%m*a));

    return 0;
}
