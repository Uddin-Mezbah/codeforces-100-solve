#include<bits/stdc++.h>

using namespace std;

void printCandis(int arr[],int t)
{
    for(int i=0;i<t;i++)
    {

        if(arr[i]==1||arr[i]==2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(arr[i]-1)/2<<endl;
        }
    }
}

int main()
{
   int t;
   cin>>t;

   int arr[t];
   for(int i=0;i<t;i++)
   {
       cin>>arr[i];
   }

   printCandis(arr,t);
}

