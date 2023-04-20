/*####################################
#                                    #
# MD MEZBAH UDDIN                    #
# Nantong University(China)          #
# CSE                                #
#                                    #
######################################*/

#include<iostream>
using namespace std;

void sumofprimNumber(int n)
{
    cout<<n/2<<endl;
    for(n=0;n>3;n++)
    {
        cout<<2<<" ";
        n-=2;
    }
    cout<<n;
}

int main()
{
    int n;
    cin>>n;
    sumofprimNumber(n);

}
