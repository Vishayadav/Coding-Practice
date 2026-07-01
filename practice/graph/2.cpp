#include <iostream>
#include <list>
#include <vector>
#include <stack>

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
        l[v].push_back(u);
    }
    void printList()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << " : ";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
    void traversal()
    {
        if (v <= 0)
            return;
        stack<int> q;
        vector<int> visited(v, 0);
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                visited[i] = 1;
                q.push(i);
                while (!q.empty())
                {
                    int curr = q.top();
                    q.pop();
                    cout << curr << " ";
                    for (int neigh : l[curr])
                    {
                        if (!visited[neigh])
                        {
                            visited[neigh] = 1;
                            q.push(neigh);
                        }
                    }
                }
            }
        }
    }
};

int main()
{
    graph g1(5);
    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.addEdge(3, 4);
    g1.addEdge(4, 1);
    g1.printList();
    g1.traversal();
    return 0;
}