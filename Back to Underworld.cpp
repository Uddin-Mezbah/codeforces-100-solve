#include <bits/stdc++.h>
#define ll long long
#define f float
#define d double


using namespace std;

vector<int> G[200009];
bool t[20009]= {};
bool node_edge[200009]= {};




void underWorld()
{
    ll int dfs(int x);
    memset(t,false,sizeof (t));
    memset(node_edge,false,sizeof (node_edge));
    for(int i=0; i<20009; i++)
        G[i].clear();
}

ll int get_dfs(int x)
{
    ll int lyk=0,vam=0;
    queue<int>q;

    q.push(x);
    t[x]=1;
    node_edge[x]=1;
    lyk++;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<G[u].size(); i++)
        {
            int v = G[u][i];
            if(t[v]==0)
            {
                q.push(v);
                t[v]=1;

                if(node_edge[u]==1)
                {
                    node_edge[v] = 0;
                    vam++;
                }
                else
                {
                    node_edge[v] = 1;
                    lyk++;
                }
            }
        }
    }

    ll int mx = max(vam,lyk);

    return mx;

}



int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int T;
    scanf("%d",&T);
    ll int  get_dfs(int x);
    int count=1;
    for(int i=0; i<T; i++)
    {
        underWorld();
        int n;
        scanf("%d",&n);
        ll int ans=0;

        for(int i=0; i<n; i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            G[u].push_back(v);
            G[v].push_back(u);
        }

        for(int i=0; i<20009; i++)
        {
            if(t[i]==0 && !G[i].empty())
            {
                ans+=  get_dfs(i);
            }
        }
        cout<<"Case "<<count++<<": "<<ans<<endl;
    }
    return 0;
}

