#include<bits/stdc++.h>

using namespace std;




int main()
{
   int a,b;
   cin>>a>>b;
   int array[a];
   int m = 0;

   for(int i=0;i<a; i++)
   {
       cin>>array[i];
   }
   sort(array,array+a);
   for(int i=0;i<a;i++)
   {
       if(array[i+1]-array[i]>m)
       {
           m=array[i+1]-array[i];
       }
   }
   double x = array[0];
   double y = (double)m/2;
   double ans = max(x,y);
   double z = b-array[a-1];
   ans = max (z,ans);
   cout<<fixed<<setprecision(10)<<ans;
}

