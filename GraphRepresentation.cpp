#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;     cin >>n >> m;
    // n is number of nodes  amd m is number of edges graph have
    // taking input in graph
    vector<int> adj[n] ;   // adjacency list for storing graphs
    // for undirected graphs
    // for directed ude this vector<pair< int , int >> adj[];
    for(int i = 0 ; i < m ; i++)
    {
        int u, v;
        cin >> u >> v ;

        adj[u].push_back(v);
        adj[v].push_back(u);
        
        // adj[u].push_back({v,wt}); 
    }
    return 0;
}