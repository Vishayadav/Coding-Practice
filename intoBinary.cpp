#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int binary(int n)
{
    int rem;
    stack<int> st;
    while (n > 0)
    {
        rem = n % 2;
        st.push(rem);
        n = floor(n / 2);
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