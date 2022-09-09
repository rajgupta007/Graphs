#include<bits/stdc++.h>
using namespace std;

// bfs traversal using a queue and vis array
void bfsOfGraph(int n , vector<int> adj[])
{
    vector<int> vis(n+1, 0);
    for(int i = 0 ; i < n ; i++)
    {
        if(!vis[i])
        {
            queue<int> q;   q.push(i);   vis[i] = 1;
            while(!q.empty())
            {
                int node = q.front(); q.pop();
                // to store the bfs pattern use vector
                cout << node << " " ;
                
                for(auto it : adj[node])
                {
                    if(!vis[it]){
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }  // end while
        } // end if   // checks visited or not
    }  // end for
}  // end bfsOfGraph

int main()
{
    // graph taken suucessfully
    // n is no. od vertices or nodes and adj[] is adjacency list
    int n, m;     cin >>n >> m;
    vector<int> adj[n] ;   // adjacency list for storing graphs
    for(int i = 0 ; i < m ; i++)
    {
        int u, v;
        cin >> u >> v ;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfsOfGraph(n, adj);

    return 0;
}