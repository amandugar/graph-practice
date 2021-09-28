#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    // vector<pair<int,int>> adj(n + 1); // If Weighted Graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        // int wt; // If Weighted Graph
        cin >> u >> v;
        // cin >> wt; // If Weighted Graph
        adj[u].push_back(v);
        // adj[u].push_back({v, wt}); // If Weighted Graph
        adj[v].push_back(u); // If Undirected Graph
    }
    return 0;
}