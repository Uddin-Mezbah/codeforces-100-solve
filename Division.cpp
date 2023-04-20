#include<bits/stdc++.h>
using namespace std;

void Division()
{
    int a;
    cin>>a;
    while(cin>>a)a/=100,printf("Division %d\n",1+(a<14)+(a<16)+(a<19));
}

int main()
{
    Division();
}

