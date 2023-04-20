#include"bits/stdc++.h"

using namespace std;
int main()
{
    int b,k;
    cin>>b>>k;
    int a[k];
    int sum=0;
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }
    sum=(sum-a[k-1])*b+a[k-1];
    if(sum%2==0)
        cout<<"even";
    else
        cout<<"odd";
    return 0;
}
