#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define l long
int *sum;
bool bfs(vector<int> adj[],int src,int dst,int v,int pred[],int dist[])
{
    list<int> queue;
    bool visited[v];
    for (int i=1;i<=v;i++)
    {
        visited[i]=false;
        dist[i]=INT_MAX;
        pred[i]=-1;
    }
	visited[src]=true;
    dist[src]=0;
    queue.push_back(src);
	while(!queue.empty())
	{
        int u=queue.front();
        queue.pop_front();
        for (int i=1;i<=adj[u].size();i++)
        {
            if (visited[adj[u][i]]==false)
            {
                visited[adj[u][i]]=true;
                dist[adj[u][i]]=dist[u] + 1;
                pred[adj[u][i]]=u;
                queue.push_back(adj[u][i]);
                if (adj[u][i]==dst)
                   return true;
            }
        }
    }

    return false;
}

void calc(vector<int> adj[],int s,int dst,int v)
{
	int pred[v],dist[v];
    bfs(adj,s,dst,v,pred,dist);
	vector<int> path;
    int cr=dst;
    path.push_back(cr);
    while(pred[cr] != -1)
    {
    	path.push_back(pred[cr]);
        cr=pred[cr];
    }
    for (int i=path.size()-1;i>=0;i--)
        sum[path[i]]++;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,M,i,u,v;
	cin>>N>>M;
	vector<int> V[N];
	::sum=new int[N];
	for(i=1;i<=N-1;i++)
	{
		cin>>u>>v;
		V[u-1].push_back(v-1);
		V[v-1].push_back(u-1);
	}
	int j,x,y;
	for(j=1;j<=M;j++)
	{
		cin>>x>>y;
		calc(V,x-1,y-1,N);
	}
	sort(sum,sum+N);
	cout<<sum[N-1]<<endl;
	return 0;
}

