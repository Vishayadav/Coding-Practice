// Code when the given lists are sorted in ascending order.
#include <iostream>
#include <vector>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        this->val = x;
        this->next = nullptr;
    }
    ListNode(int x, ListNode *next)
    {
        this->val = x;
        this->next = next;
    }
};

ListNode *mergeList(ListNode *h1, ListNode *h2)
{
    ListNode *h;
    if (h1->val <= h2->val)
    {
        h = h1;
        h1 = h1->next;
    }
    else
    {
        h = h2;
        h2 = h2->next;
    }
    ListNode *temp = h;
    while (h1 != nullptr && h2 != nullptr)
    {
        if (h1->val <= h2->val)
        {
            temp->next = h1;
            h1 = h1->next;
        }
        else
        {
            temp->next = h2;
            h2 = h2->next;
        }
        temp = temp->next;
    }

    while (h1 != nullptr)
    {
        temp->next = h1;
        h1 = h1->next;
        temp = temp->next;
    }

    while (h2 != nullptr)
    {
        temp->next = h2;
        h2 = h2->next;
        temp = temp->next;
    }
    return h;
}

int main()
{
    int n, m;
    cout << "Enter the no. of elements in list1: ";
    cin >> n;
    // if n> 0
    int y;
    cin >> y;
    ListNode *head1 = new ListNode(y);
    ListNode *temp1 = head1;
    // if n >= 1
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        temp1->next = new ListNode(x);
        temp1 = temp1->next;
    }
    cout << "Enter the no. of elements in list2: ";
    cin >> m;
    int z;
    cin >> z;
    ListNode *head2 = new ListNode(z);
    ListNode *temp2 = head2;
    for (int i = 1; i < m; i++)
    {
        int x;
        cin >> x;
        temp2->next = new ListNode(x);
        temp2 = temp2->next;
    }

    cout << "List1 content: " << endl;
    ListNode *wptr = head1;
    while (wptr != nullptr)
    {
        cout << wptr->val << " ";
        wptr = wptr->next;
    }

    cout << endl;
    cout << "List2 content: " << endl;

    wptr = head2;
    while (wptr != nullptr)
    {
        cout << wptr->val << " ";
        wptr = wptr->next;
    }

    ListNode *newHead = mergeList(head1, head2);
    cout << "\nSorted List content: " << endl;
    wptr = newHead;
    while (wptr != nullptr)
    {
        cout << wptr->val << " ";
        wptr = wptr->next;
    }
    return 0;
}