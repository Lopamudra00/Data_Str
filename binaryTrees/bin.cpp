#include <bits/stdc++.h>
using namespace std;
struct Node // a binary node
{
    int data;
    struct Node *left;  // left child
    struct Node *right; // right child

    Node(int val)
    { // initializing
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main()
{
    // building tree
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    //       1
    //     /   \
    //    2     3
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    return 0;
}