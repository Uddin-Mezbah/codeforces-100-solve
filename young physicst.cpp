#include<bits/stdc++.h>
using namespace std;
#define eps le-6
#define ll long long

int n,x=0,y=0,z=0,a,b,c;

void getFever(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 and y==0 and z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);


    int n;
    cin>>n;
    getFever(n);


}
