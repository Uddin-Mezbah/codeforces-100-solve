#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            ans++;
        }
    }

    if(ans==0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }


}

//#include<bits/stdc++.h>
//using namespace std;
//
//void easyProblem(int arr[],int n)
//{
//    int  ans=0,i;
//
//
//
//    for(int i=0; i<n; i++)
//    {
//        if(arr[i]==1)
//        {
//            ans++;
//        }
//
//
//        if(ans==0)
//        {
//            cout<<"EASY";
//            break;
//        }
//
//        else
//        {
//            cout<<"HARD";
//        }
//        //cout<<arr[i];
//    }
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    //int ans=0;
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//
//    easyProblem(arr,n);
//
//}
//


