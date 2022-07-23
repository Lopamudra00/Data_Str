// iterative method

#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// Function to reverse a node
node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;

    while (curr != NULL)
    {
        next = curr->next; // initialising next (pointer)
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev; // this is our new head.
    return head; // if we remove this code, it will give us some garbage value at the beginning.
}

int main()
{
    // node *head = NULL;
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

    node *newhead = reverse(head);
    display(newhead);
    return 0;
}