#include<bits/stdc++.h>
using namespace std;

void getIncrassing(int t)
{
     for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        set<int > s;

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }

        if(s.size()==n)
            cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
}

int main()
{

    //    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    getIncrassing(t);

}

