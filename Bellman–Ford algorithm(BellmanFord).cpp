#include<bits/stdc++.h>
using namespace std;

struct Edge{
int u, v, w;
};
int dist[100];
int n;
vector < Edge > E;

void BellmanFord(int s)
{
    for(int i=1; i<=n; i++){
        dist[i]=1000000000;
    }
    dist[s]=0;
    for(int i=0; i<n; i++){
        for(Edge e: E){
            if(dist[e.v]>dist[e.u]+e.w){
                dist[e.v] = dist[e.u]+e.w;
            }
        }
    }
}

int main()
{

    return 0;
}
