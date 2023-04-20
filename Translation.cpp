#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;
    cin>>s>>t;

    reverse(s.begin(),s.end());
    if(s==t)
    {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}


//#include<bits/stdc++.h>
//using namespace std;
//main(){
//string a,b;
//cin>>a>>b;
//reverse(a.begin(),a.end());
//if (a==b) cout<<"YES"; else cout<<"NO";
//}

Implement Stack using Queues O(1) PUSH - O(N) POP - O(N) TOP
