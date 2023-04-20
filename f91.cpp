#include<bits/stdc++.h>
using namespace std;

int printPositive(int n)
{
    //f91(f91(N + 11));

    if (n<=100)
    {
        return printPositive(printPositive(n + 11));
    }


    return n-10;
}

int main()
{
    int f;
    while(true)
    {
        int n;
        cin>>n;
        if(n==0)
        {

            break;
        }
        f = printPositive(n);
        cout<< "f91(" << n << ") = " << f << endl;

        //cout<<f;

    }
    return 0;
}
