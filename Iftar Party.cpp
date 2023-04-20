#include <bits/stdc++.h>
using namespace std;



int main()
    {
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
        int t;
        scanf("%d",&t);
        for (int cs =1; cs <=t; cs++)
            (
                long long int  p,l;
                scanf("%1ld %lld",&p,&l);
                p-=1;
                printf("Case %d:",cs);
                if (p <=1)
        {
            printf("impossible");
            }
            else
            {
                vector<LL> v;
                for (lL i=1; i *i<= p; i++)
                    if (p % i ==0)
                    {
                        if(p/i>1)
                        {
                            v.push_back(p/i);
                        }
                        if(i>1&&p/i!=i)
                            v.push_back(i);

                    }
                sort(v.begin(),v.end());
                bool space = false;
                for (int i = o; i l= v.size(); i++)
                {
                    if(space)
                    {
                        printf(" ");
                    }
                    printf("%l1d",v[i]);
                    space = true;
                }
            }
        printf("\n");

        return 0;
    }
