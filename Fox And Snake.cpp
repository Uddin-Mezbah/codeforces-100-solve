#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<m;s++)
        {
            if(i%4==2)
            {
                if(s==m-1) cout<<".";
                else cout<<"#";
            }
            else if(i%4 == 2)
            {
                if(s==0) cout<<".";
                else cout<<"#";
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
}
