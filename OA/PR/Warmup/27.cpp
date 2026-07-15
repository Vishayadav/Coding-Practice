#include <iostream>
#include <vector>

using namespace std;

int kadane(vector<int> &v)
{
    int currSum = v[0], maxSum = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        currSum = max(currSum + v[i], v[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << kadane(v);
    return 0;
}