#include<bits/stdc++.h>
using namespace std;

void printPresent(int arr[],int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<< arr[i]<<" ";

    }
    cout<<" ";
}
int main()
{
    int n;
//    int t[100];
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

    }
    printPresent(arr,n);

}
