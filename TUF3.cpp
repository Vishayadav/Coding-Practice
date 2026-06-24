#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> beg(vector<int> &v, int eli)
    {
        v.insert(v.begin(), eli);
        return v;
    }

    vector<int> end(vector<int> &v, int eli)
    {
        v.push_back(eli);
        return v;
    }

    vector<int> mid(vector<int> &v, int pos, int eli)
    {
        v.insert(v.begin() + pos, eli);
        return v;
    }
};

int main()
{

    solution obj;
    vector<int> ans = obj.beg(obj.v, 0);
    for (int i : ans)
        cout << i << " ";
    cout << "\n";
    ans = obj.end(obj.v, 10);
    for (int i : ans)
        cout << i << " ";
    cout << "\n";
    ans = obj.mid(obj.v, 4, 6);
    for (int i : ans)
        cout << i << " ";
    cout << "\n";

    return 0;
}