#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p,q;
    int count;
    for(int i=0; i<n; i++)
    {

        cin>>p>>q;
        if(q-p>1)

            count++;

    }
    cout<<count;
}


//#include<bits/stdc++.h>
//using namespace std;
//
//main()
//{
//    int n,a,b,c,i;
//	cin>>n;
//	for(i=0; i<n; i++)
//	{
//		cin>>a>>b;
//		if(b-a>1)
//		c++;
//	}
//	cout<<c;
//}
