#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class solution
{
public:
    vector<int> vis;
    void bfs(int i, vector<vector<int>> &adj)
    {
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            int num = 0;
            while (num < adj[node].size())
            {
                if (vis[adj[node][num]] == 0)
                {
                    q.push(adj[node][num]);
                    vis[adj[node][num]] = 1;
                }
                num++;
            }
        }
    }
};

int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<int>> adj(V);
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << endl;
    for (int i = 0; i < V; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    solution obj;
    int count = 0;
    obj.vis = vector<int>(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (obj.vis[i] == 0)
        {
            count++;
            obj.bfs(i, adj);
        }
    }
    cout << endl
         << count;
    return 0;
}