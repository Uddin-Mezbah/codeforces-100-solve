//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int t,n=0,h=0,i,j;
//    cin>>t;
//    int a[t];
//    for(i=0; i<t; i++)
//    {
//        cin>>a[i];
//        h+=a[i];
//    }
//    sort(a,a+t);
//    for(i=0; 2*n<=h; i++)
//    {
//        n=n+a[t-i-1];
//    }
//    cout<<i<<endl;
//}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int min=0;
    int count=0;

    for( i=0;i<n;i++)
    {
        cin>>arr[i];
        count+=arr[i];
    }
    sort(arr,arr+n);
    for( i=0;2*min<=count;i++)
    {
        min=min+arr[n-i-1];
    }
    cout<<i<<endl;
}
