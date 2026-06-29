#include <iostream>

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
    bool search(Node *root, int data)
    {
        if (root == nullptr)
            return false;
        if (root->val == data)
            return true;
        if (data < root->val)
        {
            if (root->left)
                search(root->left, data);
        }
        if (data > root->val)
        {
            if (root->right)
                search(root->right, data);
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
    obj.search(root, 10) == 1 ? cout << "True" : cout << "False";
    return 0;
}
