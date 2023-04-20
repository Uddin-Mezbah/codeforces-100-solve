#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    vector<double> v;

    while(cin>>n) v.push_back(n);

    for(int i=v.size()-1; i>=0; i--) cout<<setprecision(4)<<fixed<<sqrt(v[i])<<endl;

    return 0;
}
