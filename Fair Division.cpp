#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define LL Long Long

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int t,n,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        a=b=0;
        cin>>n;
        while(n--)
        {
            cin>>c;
            (c==1?a++:b++);
        }
        cout<<((a%2 || (b%2 && a<2))?"NO":"YES")<<endl;
    }
    return 0;

}
