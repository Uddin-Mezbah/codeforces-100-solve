#include <bits/stdc++.h>
#define ll long long
#define f float
#define d double
using namespace std;



void get_circleSquare(int t)
{
    d pi = 2.0 * acos(0.0);
    for (int i = 1; i <= t; i++)
    {
        d r;
        cin>>r;
        d a = (2 * r * 2 * r) - (pi * r * r);
        printf("Case %d: %.2lf\n", i, a);
    }
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    get_circleSquare(t);


    return 0;
}
