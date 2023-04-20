//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    //cin>>n;
//    int arr[n];
//    int sum=0;
//    int ans=0;
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//        if(arr[i]%2==0)
//        {
//            sum++;
//        }
//        else
//        {
//            ans++;
//        }
//        if(sum>ans)
//        {
//             for(int i=0;i<n;i++)
//                if(arr[i]%2==0)
//                 cout<<i+1;
//             break;
//        }
//    }
//
//
//    return 0;
//}

#include <iostream>
using namespace std;
int main()
{
    int n, m, ch, nch=0, sum=0;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> m;
        if (m%2==0)
        {
            ch=i;
            sum++;
        }
        else nch=i;
    }
    if (sum == 1) cout << ch;
    else cout << nch;
}
