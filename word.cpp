#include"bits/stdc++.h"

using namespace std;


int main()
{
    string s;
    cin >> s;

    int ans=0;
    for(int i=0; i < s.size(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            ans++, s[i] +=32 ;
    if(ans > s.size() - ans)
        for(int i=0; i < s.size();
                i++) s[i]-=32;
    cout << s;
    return 0;
}
