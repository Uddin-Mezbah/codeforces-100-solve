#include<bits/stdc++.h>
using namespace std;
void printPalindrome(string str,int n)
{
    for (int i = 0; i <n / 2; i++) {

        if (str[i] != str[n - i - 1]) {

            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return ;
}
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    printPalindrome(str,n);

    return 0;
}

