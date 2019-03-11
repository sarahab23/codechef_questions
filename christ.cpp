#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define l long
map<int,int> sum;
bool BFS(vector<int> adj[], int src, int dest, int v,int pred[], int dist[]){
    list<int> queue;
    bool visited[v];
    for (int i = 0; i < v; i++){
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
	visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);
	while (!queue.empty()){
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++){
            if (visited[adj[u][i]] == false){
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);
                if (adj[u][i] == dest)
                   return true;
            }
        }
    }
    return false;
}

void single_visit(vector<int> adj[], int s, int dest, int v){
	int pred[v], dist[v];
    BFS(adj, s, dest, v, pred, dist);
	vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1){
    	path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }
    for (int i = path.size() - 1; i >= 0; i--)
        sum[path[i]]++;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int M,N,u,v,i,j,x,y;
	cin>>N>>M;
	vector<int> V[N];
	for(i = 0; i < N-1; i++){
		cin>>u>>v;
		V[u-1].push_back(v-1);
		V[v-1].push_back(u-1);
	}
	for(j = 0; j < M; j++){
		cin>>x>>y;
		single_visit(V, x-1, y-1, N);
	}
    int max = -1;
	for (map<int, int>::iterator itr = sum.begin(); itr != sum.end(); ++itr){
        //cout<<"\n1st:"<<itr->first<<" 2nd:"<<itr->second<<endl;
        if(itr->second > max)
            max = itr->second;
    }
    cout<<max<<endl;
	return 0;
	}
