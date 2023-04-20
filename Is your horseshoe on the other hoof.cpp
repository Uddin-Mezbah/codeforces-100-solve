//#include <bits/stdc++.h>
//using namespace std;
//
//int main ()
//{
//    int s1,s2,s3,s4;
//    int shoes=0;
//    cin>>s1>>s2>>s3>>s4;
//
//    if (s1==s2 || s1==s3 || s1==s4)
//        shoes++;
//    if (s2==s3 || s2==s4)
//        shoes++;
//    if (s3==s4)
//        shoes++;
//    cout<<shoes;
//}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s1,s2,s3,s4;
     int shoes=0;
    cin>>s1>>s2>>s3>>s4;
    if(s1==s2||s1==s3||s1==s4)
        shoes++;
     if(s2==s3||s2==s4)
        shoes++;
     if(s3==s4)
        shoes++;

    cout<<shoes;
}
