#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str;

    while(cin>>str)
    {
        str=tolower(str);
        if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u')
        {
            cout<<"."<<str<<endl;
        }
    }

}








//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    char ch;
//    while(cin>>ch){
//        ch=tolower(ch);
//        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y'))
//            cout<<'.'<<ch;
//    }
//}
