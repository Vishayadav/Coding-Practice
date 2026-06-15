/*Note to self:
Agar OA ke waqt isme bahot bug aaya and solve nahi ho paaya , last moment pe just use sort to sort the array in ascending order :
code:
sort(v.begin(), v,end());
and then print v[n-2] (Keeping -1 condition in mind too, i,e, if v[n-2] == v[n] run a loop to find what's the smaller one than v[n] if none, return -1.

A working n log n is better then a buggy n .
*/

#include <iostream>
#include <climits>
#include <vector>

using namespace std;
int main()
{
    int n, x, largest = INT_MIN, secondLargest = INT_MIN;
    cin >> n;
    // vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > largest)
        {
            secondLargest = largest;
            largest = x;
        }
        if (x < largest && x > secondLargest)
        {
            secondLargest = x;
        }
    }
    if (secondLargest == INT_MIN)
        cout << -1;
    else
        cout << secondLargest;
    return 0;
}