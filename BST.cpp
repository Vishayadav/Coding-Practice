#include <iostream>
#include <vector>
#include <queue>

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
    void printTree(Node *root)
    {
        if (root == nullptr)
            return;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *curr = q.front();
            cout << curr->val << " ";
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
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
    obj.printTree(root);
    return 0;
}