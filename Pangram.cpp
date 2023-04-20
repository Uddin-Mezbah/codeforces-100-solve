#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int count=0;
    for(int i=0;i<n;i++)
    {
        str[i]=towlower(str[i]);
    }
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++)
    {
        if(str[i]!=str[i+1])
        count++;
    }
    if(count==26)
        cout<<"YES";
    else
        cout<<"NO";



}
