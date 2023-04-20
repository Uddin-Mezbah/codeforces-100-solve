#include<bits/stdc++.h>
using namespace std;

void printSmallest(int a[],int n)
{
    int c=0;
 for(int i=1;i< n;i++)
{
  if(a[i] - a[i-1] <=1 )
   c++;

}

 if(n-c == 1)
  cout<< "YES\n";
 else
  cout<< "NO\n";

}

int main()
{
  int t;
 cin>> t;
while(t--)
{
  int n;
 cin>> n;
int a[n];
 for(int i=0;i< n;i++)
  cin>> a[i];

 sort(a,a+n);
 printSmallest(a,n);


}

}

