#include <bits/stdc++.h>
using namespace std;


int gcd(int n1, int n2)
{

    if (n2 == 0)
        return n1;
    return gcd(n2, n1 % n2);
}

int gcd_sum(int n, int n2, map<string, int> &gcds)
{
    string key = to_string(n) + "_" + to_string(n2);
    if(gcds[key])
    {
        return gcds[key];
    }
    else
    {
        int gc = gcd(n,n2);
        gcds[key] = gc;
        return gc;
    }
}

int main(void)
{
    map<string, int> gcds;
    int n;
    while(cin>>n)
    {
        if(n == 0)
        {
            break;
        }
        else
        {
            int sum = 0;
            for(int i = 1; i < n; i++)
            {
                for(int j = i + 1; j <= n; j++)
                {
                    sum += gcd_sum(i, j, gcds);
                }
            }
            cout << sum << endl;
        }
    }
}
