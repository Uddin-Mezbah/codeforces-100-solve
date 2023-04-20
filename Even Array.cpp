#include <bits/stdc++.h>
using namespace std;

void isevenArray()
{
    int t,n;
     cin >> t;

    while(t--)
    {

        cin >> n;
        int ow=0,ew=0,c;
        for(int i=0; i<n; i++)
        {
            cin >> c;
            if(i%2 == c%2) continue;
            if(i%2==1) ow++;
            else ew++;
        }
        if(ow==ew) cout << ow << endl;
        else cout << -1 << endl;
    }
}

int main()
{

    isevenArray();

}
