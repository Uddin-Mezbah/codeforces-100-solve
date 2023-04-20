#include<bits/stdc++.h>

using namespace std;

#define LL Long Long

void stoneFile(int n)
{
    int ston[20];
    for(int i = 0; i<n; ++i)
        cin>>ston[i];

    int pile = 2000005;

    for(int i = (1<<(n-1))-1; i>=0; --i)
    {
        int ans = 0;

        for(int j = 0; j<n; ++j)
            if(i & (1<<j)) ans += ston[j];
            else ans -= ston[j];

        pile = min(pile,abs(ans));
    }

    printf("%d\n",pile);
}

int main()
{
    //    freopen("input.txt","r",stdin);
   //    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    stoneFile(n);



    return 0;
}
