#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    while(str.find("WUB")!=str.npos)
    {
        str.replace(str.find("WUB"),sizeof("WUB")-1," ");
    }
    cout<<str<<endl;
}
