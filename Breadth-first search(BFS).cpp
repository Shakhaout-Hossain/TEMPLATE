#include<bits/stdc++.h>
using namespace std;

vector < int > v[1000];
int vis[1000];
int dist[1000];
int parent[1000];

void BFS(int s, int n)
{
    for(int i=0; i<=n; i++)
        vis[i]=0;
    queue < int > q;
    q.push(s);
    vis[s]=1;
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        for(int i=0; i<v[k].size(); i++)
        {
            int p = v[k][i];
            if(vis[p]==0)
            {
                vis[p] = 1;
                q.push(p);
                dist[p] = dist[k]+1;
                parent[p]=k;
            }
        }
    }
}

int main()
{

    return 0;
}
