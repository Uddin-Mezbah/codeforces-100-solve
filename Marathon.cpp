#include<bits/stdc++.h>
using namespace std;

void maraThon(int t)
{
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(b>a)+(c>a)+(d>a)<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    maraThon(t);

    return 0;
}
