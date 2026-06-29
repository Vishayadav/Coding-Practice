#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = this->right = nullptr;
    }
};

class solution
{
public:
    int MAD(Node *root)
    {
        if (root == nullptr)
            return 0;
        queue<Node *> q;
        q.push(root);
        vector<int> v;
        int mini = INT_MAX;
        while (!q.empty())
        {
            Node *curr = q.front();
            v.push_back(curr->val);
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            mini = min(mini, v[i + 1] - v[i]);
        }
        return mini;
    }
};

int main()
{
    Node *root = new Node(4);
    Node *temp = new Node(2);
    root->left = temp;
    temp = new Node(6);
    root->right = temp;
    temp = new Node(1);
    root->left->left = temp;
    temp = new Node(3);
    root->left->right = temp;
    solution obj;
    cout << obj.MAD(root);
    return 0;
}