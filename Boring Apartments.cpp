#include<bits/stdc++.h>
using namespace std;
#define eps le-6
#define LL Long Long
#define s string

void boringHome()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        s hom;
        cin>>hom;
        int dig = hom[0]-'0';
        int len =hom.size();
        cout<<10*(dig-1)+len*(len+1)/2<<endl;
    }
}
int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        string s;
//        cin>>s;
//        int dig=s[0]-'0';
//        int len=s.size();
//        cout<<10*(dig-1)+len*(len+1)/2<<endl;
//    }

    boringHome();
    cout<<endl;
    return 0;
}
