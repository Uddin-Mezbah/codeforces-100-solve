#include<bits/stdc++.h>
using namespace std;
#define eps le-6
#define LL Long Long
#define s string
#define a arr[100005]
int a[5];

void blacksquire()
{

    for (int i = 1; i <= 4; i ++)
        cin >> a[i];
    s str;
    cin >> str;
    int sum = 0;
    for (int i = 0 ; i < str.size(); i ++)
        sum += a[str[i]-'0'];
    cout << sum << endl;

}
int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);

    blacksquire();

}

