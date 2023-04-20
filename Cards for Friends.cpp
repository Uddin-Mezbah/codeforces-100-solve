#include<bits/stdc++.h>
using namespace std;
int a,b,N;
#define eps le-6
#define ll long long

void playin29(int T)
{
    while(T--)
    {
        cin>>a>>b>>N;
        int cnt=1;
        while(a%2==0)
        {
            a>>=1,cnt<<=1;
            if(cnt>=N)break;
        }
        while(b%2==0)
        {
            b>>=1,cnt<<=1;
            if(cnt>=N)break;
        }
        cout<<(cnt>=N?"YES\n":"NO\n");
    }
}

int main()
{
    //    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    playin29(T);

    return 0;
}
