#include <bits/stdc++.h>
using namespace std;
int n,m,a=0;
void twoButtons()
{
    cin>>n>>m;
    while(n<m)m%2?m++:m/=2,a++;
    cout<<a+n-m;
}
main()
{
    twoButtons();
}
