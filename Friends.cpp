#include<bits/stdc++.h>

#define N 10000006
using namespace std;
int arr[N];
int ans[N];

int find_frnd(int x)
{
    return arr[x] == x?x:find_frnd(arr[x]);
}

void friends()
{
     int t =0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        for(int i = 1; i<= n; i++)
        {
            arr[i] =i;
            ans[i] = 0;
        }
        for(int i=0;i<m;i++)
        {
            int k, p, x, y;
            cin>>k>>p;
            x = find_frnd(k);
            y = find_frnd(p);
            if(x != y)
            {
                arr[x] = y;
            }


        }
        for(int i = 1; i<= n; i++)
        {
            ans[find_frnd(i)]++;
        }
        int maxv = 0;
        for(int i = 1; i <= n; i++)
        {
            if(maxv < ans[i])
                maxv = ans[i];
        }
        cout<<maxv<<endl;
    }
}


int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);


    friends();


}
