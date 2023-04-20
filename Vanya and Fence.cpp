#include <iostream>
using namespace std;

int main()
{
    int n,h,x;
    cin>>n>>h;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x>h)
            ans+=2;
        else
            ans+=1;
    }
    cout<<ans<<endl;
}
