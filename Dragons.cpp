//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n,s;
//    cin>>n>>s;
//    int ans=0;
//    pair<int,int>p[1000];
//    for(int i=0;i<s;i++)
//    {
//        cin>>p[i].first>>p[i].second;
//    }
//    sort(p,p+1);
//    //cout<<"start: ";
//    for(int i=0;i<s;i++)
//    {
//        if(n<=p[i].first)
//        {
//            ans++;
//            //break;
//            return 0;
//        }
//        else
//        {
//            n=n+p[i].second;
//        }
//    }
//    if(ans>0)
//    {
//        cout<<"NO";
//    }
//    else
//    {
//        cout<<"YES";
//    }
//}

#include<bits/stdc++.h>
using namespace std;
i
main()
{
    nt s,n,i;

    pair<int,int>a[1000];

    cin>>s>>n;
    for(i=0; i<n; i++)
        cin>>a[i].first>>a[i].second;

    sort(a, a+n);

    for(i=0; i<n; i++)
        if(s>a[i].first) s+=a[i].second;
        else
        {
            cout<<"NO";
            return 0;
        }

    cout<<"YES";
}
