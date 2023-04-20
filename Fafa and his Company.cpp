#include<bits/stdc++.h>
using namespace std;

void fafaCompany()
{

    int n,a=0;
    cin>>n;
    for(int i=1; i<n; i++)
        if((n-i)%i==0) a++;
    cout<<a;
}

main()
{
    fafaCompany();
}

