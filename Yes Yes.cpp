#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int cnt;
		string str="";
		for(int i=0 ; i<50 ; i++)
		{
			str+="Yes";
		}
		if((cnt=str.find(s,0))==string::npos)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
