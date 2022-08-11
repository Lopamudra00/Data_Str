#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool balanced(Node *root, int *height)
{
    if (root == NULL)
    {
        return true;
    }
    int lh = 0, rh = 0;
    if (balanced(root->left, &lh) == false)
    {
        return false;
    }
    if (balanced(root->right, &rh) == false)
    {
        return false;
    }

    *height = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Here,we're not calling any height function . We just passing the pointers which will cal the height of each passing node. This will reduce  the complexity.

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = 0;
    if (balanced(root, &height) == true)
    {
        cout << "Balanced tree" << endl;
    }
    else
    {
        cout << "Unbalanced Tree" << endl;
    }

    return 0;
}
