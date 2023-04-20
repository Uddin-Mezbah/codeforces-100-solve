/*####################################
#                                    #
# MD MEZBAH UDDIN                    #
# Nantong University(China)          #
# CSE                                #
#                                    #
######################################*/

#include <bits/stdc++.h>

using namespace std;
#define eps le-6
#define LL long long
#define s string
void unary()
{
     s str,res="><+-.,[]";
    cin>>str;
    LL size=0,mod=1e6+3;
    for(int i=0; i<str.length(); i++)
    {
        size=(size*16+res.find(str[i])+8)%mod;
    }
    cout<<size;
}

int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
   unary();
    return 0;
}
