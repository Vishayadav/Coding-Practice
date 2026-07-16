#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void manageSlots(int n, int q)
{
    vector<int> slots(n + 1, 0);
    int occupied = 0;
    while (q--)
    {
        char op;
        cin >> op;
        if (op == 'P')
        {
            int x;
            cin >> x;
            if (slots[x] == 0)
            {
                slots[x] = 1;
                occupied++;
            }
        }
        else if (op == 'L')
        {
            int x;
            cin >> x;
            if (slots[x] == 1)
            {
                slots[x] = 0;
                occupied--;
            }
        }
        else
        {
            cout << occupied << endl;
        }
    }
}

int main()
{
    int n, q;
    cin >> n >> q;
    manageSlots(n, q);
    return 0;
}