#include <iostream>
#include <vector>

using namespace std;

int mostWater(vector<int> &height)
{
    int n = height.size();
    int left = 0, right = n - 1, areaCovered, maxArea = 0;
    while (left < right)
    {
        areaCovered = min(height[left], height[right]) * (right - left);
        maxArea = max(maxArea, areaCovered);
        height[left] < height[right] ? left++ : right--;
    }
    return maxArea;
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << mostWater(height);

    return 0;
}