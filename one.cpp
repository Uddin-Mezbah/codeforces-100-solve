#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    int k;
    while(scanf("%d",&n)==1)
    {
        int d=1;
        int one=1;
        if(n==0)
            cout<<endl;
        else
        {
            do
            {
                if(d<n)
                {
                    d=(d*10)+1;
                    one+=1;
                }
                k=d%n;
                if(k!=0)
                    d=k;
            }

            if(k!=0)
                cout<<one;
        }

    }
    return 0;
}
