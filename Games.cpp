#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    int game=0;
    for(int i=0; i<n; i++)
        cin>>arr1[i]>>arr2[i];

    for(int i=0; i<n; i++)

        for(int j=0; j<n; j++)

            if(arr1[i]==arr2[j])
                game++;
    cout<<game;
}


//#include<bits/stdc++.h>
//
//using namespace std;
//
//
//int main()
//{
//    int n;
//    cin>>n;
//    int game=0;
//    int arr1[n],arr2[n];
//
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr1[n]>>arr2[n];
//    }
//
//    for(int j=0;j<n;j++)
//    {
//
//        for(int g=0;g<n;g++)
//        {
//            if(arr1[j]==arr2[g])
//                game++;
//        }
//    }
//    cout<<game;
//
//}
