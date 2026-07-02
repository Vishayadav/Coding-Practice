#include <iostream>
#include <list>
#include <vector>

using namespace std;

class graph
{
public:
    int v;
    list<int> *l;
    graph(int v)
    {
        this->v = v;
        this->l = new list<int>[v];
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
    }
    void printList()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << " :";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    vector<vector<int>> allPath()
    {
        vector<int> currPath;
        vector<vector<int>> ans;
        DFS(0, currPath, ans, l);
        return ans;
    }
    void DFS(int node, vector<int> &currPath, vector<vector<int>> &ans, list<int> *l)
    {
        currPath.push_back(node);
        if (node == v - 1)
            ans.push_back(currPath);
        else
        {
            for (int neigh : l[node])
            {
                DFS(neigh, currPath, ans, l);
            }
        }
        currPath.pop_back();
    }
};

int main()
{
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.printList();
    vector<vector<int>> res = g.allPath();
    for (int i = 0; i < res.size(); i++)
    {
        cout << "Path " << i + 1 << " : ";
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}