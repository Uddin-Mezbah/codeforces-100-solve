#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int num=0;
    for(int i=0; i*i<=n; i ++)
    {
        if(i+(n-i*i)*(n-i*i)==m)
        {
            num++;
        }

    }
    cout<<num<<endl;

    return 0;
}
