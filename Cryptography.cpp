#include<bits/stdc++.h>
using namespace std;
#define crypto 165000
#define ll long long

ll prim[crypto];
ll fectar[crypto];

void isPrim()
{

    ll n = crypto;
    int prim_num=1;
    ll sqr = sqrt(n);
    for(int i=4 ; i<=n; i=i+2)
    {
        fectar[i] = 1;
    }
    for(int i=3 ; i<=sqr; i=i+2)
    {
        if(fectar[i]==0)
        {
            for(int j=2*i; j<=n; j+=i)
            {
                fectar[j]=1;
            }
        }
    }

    for(int i=2 ; i<=n ; i++)
    {
        if(fectar[i] == 0)
        {
            prim[prim_num] = i;
            prim_num++;
        }
    }
}

int main()
{

    int k, position;
    isPrim();
    scanf("%d", &k);

    while(k--)
    {
        cin >> position;
        cout << prim[position] << endl;
    }


}

