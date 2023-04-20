#include <bits/stdc++.h>
using namespace std;

int a[3];
void getMediumnumber(int t)
{

    for (int i=0;i<t;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<a[1]<<endl;
        //cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    getMediumnumber(t);

}
