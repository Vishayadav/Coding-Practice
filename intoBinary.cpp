#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

void binary(int n)
{
    int rem;
    stack<int> st;
    if (n == 0)
        st.push(0);
    while (n > 0)
    {
        rem = n % 2;
        st.push(rem);
        n /= 2;
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    int n;
    cin >> n;
    binary(n);
    return 0;
}