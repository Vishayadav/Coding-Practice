#include <iostream>
#include <list>
#include <vector>

using namespace std;

class graph
{
public:
    int v;
    list<int> *l;

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }

    void printAdjList()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << " : ";
            for (int j : l[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g1(5);
    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.addEdge(4, 1);
    g1.addEdge(3, 4);

    g1.printAdjList();
    return 0;
}