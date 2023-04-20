#include"bits/stdc++.h"
using namespace std;
int main ()
{
    long long int n;

    cin>>n;
     int ans=0;
    while (n>0)
    {
        if (n%10==4||n%10==7)
            ans++;
        n/=10;
    }
    if (ans==4||ans==7)
        cout <<"YES";
    else
        cout <<"NO";
}


//#include"bits/stdc++.h"
//using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    int ans=0;
//    for(int i=0;i<=n;i++)
//    {
//
//    if(ans==4 || ans==7)
//        cout<<"YES";
//    else
//        cout<<"NO";
//    }
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int  n;
//    int k=0;
//    cin>>n;
//    for(int i=0; i<n; i++)
//        if(n[i]=='4'||n[i]=='7')
//            k++;
//    if(k==4||k==7)
//        cout<<"YES";
//    else
//        cout<<"NO";
//}
