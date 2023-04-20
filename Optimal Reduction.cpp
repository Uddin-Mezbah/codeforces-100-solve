#include<bits/stdc++.h>
using namespace std;

#define eps le-6
#define LL long long


void getOptimal(int t)
{
    for(int i=0;i<t;i++)
	{
	    int n;
		cin>>n;
		int a[n];
		LL min = 0;
		LL max = 0;
		LL count = 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]>min)
			{
				count += a[i]-min;
				max = a[i];
			}
			min = a[i];
		}
		if(count<=max) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    getOptimal(t);

    return 0;

}
