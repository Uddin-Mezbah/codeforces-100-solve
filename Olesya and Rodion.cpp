#include<iostream>
using namespace std;
int ans=1;
int main()
{
    int n,t;
    cin >> n >> t;
    if(n==1&&t==10)
        cout<<-1;
    else
    {
        cout<<t;

        if(t==10)
            ans++;
        for(ans; ans<n; ans++)
            cout<<0;
    }
    cout<<endl;
}
