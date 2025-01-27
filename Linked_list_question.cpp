#include <iostream>
using namespace std;

// Node class to represent each element of the linked list
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Function to reverse the linked list in groups of size k
Node *kreverse(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    // Reverse the first k nodes of the linked list
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursive call for the rest of the list
    if (next != NULL)
    {
        head->next = kreverse(next, k);
    }

    // Return the new head after reversal
    return prev;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a new node at the end of the list
void append(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;

    // Creating a linked list
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    append(head, 6);
    append(head, 7);
    append(head, 8);

    cout << "Original List: ";
    printList(head);

    int k = 3;
    head = kreverse(head, k);

    cout << "Reversed List in groups of " << k << ": ";
    printList(head);

    return 0;
}
