#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int a=3;
	string word[a]={"apple","ball","cat"};
	string nword[a]={"lppea","lalb","cta"};
	string j;
	int point;
	int p=0;
	int ctr=0;



	for(int i=0; i<a; i++)
	{

		cin>>j;



		ctr++;
		if(j==word[i])
		{
			cout<<"YES";

		}
		else
		{
			cout<<"NO";
		}

	}
	//cout<<"Your Score Is:"<<point<<endl;
	return 0;
}
