#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define LL Long Long
#define forn(i, n) for (int i = 0; i < int(n); i++)

int solve(int a, int b)
{
    int side = min(max(a * 2, b), max(a, b * 2));
    return side * side;
}

void square()
{
     int t;
    cin >> t;
    forn(tt, t)
    {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
}


int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    square();

}
