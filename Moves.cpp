/*####################################
#                                    #
# MD MEZBAH UDDIN                    #
# Nantong University(China)          #
# CSE                                #
#                                    #
######################################*/

#include<bits/stdc++.h>
using namespace std;

#define eps le-6
#define LL Long Long

void printMinimun(int t)
{

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            printf("2\n");
        }
        else{
            printf("%d\n",((n-1)/3) + 1);
        }
    }
}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    printMinimun(t);

    return 0;

}


