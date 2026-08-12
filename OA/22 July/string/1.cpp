#include <iostream>
#include <vector>

using namespace std;

struct trans
{
    string sender;
    string receiver;
    double amount;
    int ts;
};

bool isSame(const trans &a, const trans &b)
{
    return a.sender == b.sender && a.receiver == b.receiver && a.amount == b.amount && (abs(a.ts - b.ts) <= 60);
}

int main()
{
    int n;
    cin >> n;
    vector<trans> v;
    for (int i = 0; i < n; i++)
    {
        trans t;
        cin >> t.sender >> t.receiver >> t.amount >> t.ts;
        v.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isSame(v[i], v[j]))
            {
                cout << v[i].sender << v[i].receiver << v[i].amount << v[i].ts << endl;
                cout << v[j].sender << v[j].receiver << v[j].amount << v[j].ts << endl;
            }
        }
    }
    return 0;
}