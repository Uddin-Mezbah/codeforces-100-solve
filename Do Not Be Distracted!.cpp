#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0; i<n; i++)
        {
            if(str[i]!=str[i+1])
            {
                for(int j=i+1; j<n; j++)
                {
                    if(str[i]==str[j])
                    {
                        count=1;
                    }
                }
            }
        }
        if(count==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
