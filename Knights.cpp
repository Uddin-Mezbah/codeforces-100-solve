#include <bits/stdc++.h>
#define ll long long
#define f float
#define d double
using namespace std;

void playKnight(int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if((i+j)&1)
                cout<<"W";
            else
                cout<<"B";
        }
        cout<<endl;
    }

}
int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    playKnight(n);

    return 0;

}
