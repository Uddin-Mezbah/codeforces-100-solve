#include"bits/stdc++.h"

using namespace std;

int main()
{
    int n,t;
    cin>>t;

    for(int j=1; j<=t; j++)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int cnt = 0;
        for(int i=1; i<n; i++)
        {
            int x=max(arr[i-1],arr[i]);
            int y=max(arr[i-1],arr[i]);
            while(2*y<x)
            {
                cnt++;
                y=2*y;
            }
        }
        cout<<cnt<<endl;
    }

}
