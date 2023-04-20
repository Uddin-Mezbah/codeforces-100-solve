#include<bits/stdc++.h>
using namespace std;
char c,s='a';
int k=0;

void gonightMusiam()
{
    while(cin>>c)k+=min(abs(s-c),26-abs(s-c)),s=c;
    cout<<k;
}

main()
{
    gonightMusiam();
    return 0;
}
