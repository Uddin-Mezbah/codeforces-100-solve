#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define LL Long Long

void polyCoin()
{
    int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<(n/3+(n%3==1))<<" "<<(n/3+(n%3==2))<<endl;
	}

}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    polyCoin();


    return 0;

}

