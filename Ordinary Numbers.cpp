//#include <bits/stdc++.h>
//using namespace std;
//
//int ordanaryNumber(int n)
//{
//    int i;
//    int ans = 0;
//    for (int n=1; n<=n; i++)
//    {
//        n = n/(n % 10)*(n%10+1);
//        if (n % 10==0)
//            n++;
//    }
////    for(int i=0;i<n;i++)
////    {
////        cout << ordanaryNumber(n) << endl;
////    }
//    return ans;
//}
//int main()
//{
//    int n,t;
//    cin>>n;
//      for(int i=0;i<n;i++)
//    {
//        cin>>t;
//        cout << ordanaryNumber(n) << endl;
//    }
//    //cout << ordanaryNumber(n) << endl;
//    ordanaryNumber(n);
//
//}
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int  num=0;
        for(int i=1; i<=n; i++)
        {
            cout<<num<<endl;
        }
        cout<<endl;
    }
    return 0;

}
