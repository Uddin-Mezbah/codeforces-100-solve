#include<bits/stdc++.h>
using namespace std;

#define eps le-6
#define ll long long



int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);



    int t,h,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>h>>m;
        cout<<24*60-(h*60+m)<<endl;
    }

}

