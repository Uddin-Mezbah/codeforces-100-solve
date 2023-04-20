//#include<bits/stdc++.h>
//
//using namespace std;
//
//void teamOlympiad(int arr[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//         cout<<arr[i];
//    }
//
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    teamOlympiad(arr,n);
//}

#include<bits/stdc++.h>
using namespace std;

int  Olympiad()
{
    return 0;
}

main()
{
    int n,y,i,b;
    cin>>n;
    int a[4],c[4][5000];
    for(i=0; i<n; i++)
    {
        cin>>b;
        a[b]++;
        c[b][a[b]]=i+1;
    }
    Olympiad();
    y=min(a[1],min(a[2],a[3]));
    cout<<y<<endl;
    for(i=1; i<=y; i++)
        cout<<c[1][i]<<" "<<c[2][i]<<" "<<c[3][i]<<endl;
}
