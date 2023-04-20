#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n)
{
    int mid;
    int low=0;
    int high=n-1;
    int x;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(x<arr[mid])
            high = mid+1;
        else if (x>arr[mid]) low = mid-1;
        else
            return mid;

    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++ )
    {
        cin>>arr[i];

    }
    binarySearch(arr,n);






}
