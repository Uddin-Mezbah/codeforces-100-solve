//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int k,m,n;
//    cin>>k>>m>>n;
//    n=(n*(n+1)/2)*k;
//    if(m>=n)
//        cout<<0;
//    else
//        cout<<n-m;
//}

#include"bits/stdc++.h"

using namespace std;

int main()
{
  int arr[]={1,4,5,5,6,10};

    int freq[8]={0};

    for(int i=0;i<8;i++)

    {

        freq[arr[i]]++;

    }

    for(int i=0;i<8;i++)

    {

        cout<<freq[arr[i]]<<" ";

    }

}
