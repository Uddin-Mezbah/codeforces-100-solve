#include <iostream>
using namespace std;

#define eps le-6
#define ll long long

int n,m;
char x;

void getBrain()
{
     cin>>n>>m;
    while(cin>>x) if(x!='B' && x!='W' && x!='G')
        {
            cout<<"#Color";

        }
    cout<<"#Black&White";
}

main()
{
   getBrain();
   cout<<endl;
}
