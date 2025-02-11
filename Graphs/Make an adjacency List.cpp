class Solution
{
public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>> &edges)
    {
        // Code here
        vector<vector<int>> adj(V);  // 2d vector of V vertices

        for (pair<int, int> &p : edges)
        {
            int v = p.second;
            int u = p.first;

            adj[u].push_back(v);
            adj[v].push_back(u);   // only if graph is undirected
        }

        return adj;
    }
};
