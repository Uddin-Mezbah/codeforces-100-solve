#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=998244353,I=(M+1)/2;
int n,f[5004],g[5004],C[5004][5004];

void get_Color_graph(int n)
{
    scanf("%d",&n);
    for(int i=0; i<=n; C[i][0]=1,i++)
        for(int j=1; j<=i; j++)C[i][j]=(C[i-1][j-1]+C[i-1][j])%M;
    f[1]=1,g[1]=1;
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<i; j++)
            (f[i]+=(ll)g[i-j]*C[i-1][j-1]%M*f[j]%M)%=M;
        g[i]=f[i]*2%M;
    }
    printf("%d",(g[n]+M-2)%M);
}

int main()
{
    get_Color_graph(n);
}
