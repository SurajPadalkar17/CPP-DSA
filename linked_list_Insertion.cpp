#include <iostream>
using namespace std;

// Define the Node structure
class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a node
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertatbein(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertatend(Node *tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Function to print the linked list
void print(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertatposition(Node* &Head,int position,int d){
    if(position ==1){
        insertatbein(Head,d);
        return;
   }
   Node * temp =Head;
   int cnt = 1;
   while(cnt < position -1 ){
    temp = temp -> next;
    cnt++;
   }
   Node * nodetoinsert = new Node(d);
   nodetoinsert -> next = temp -> next;
   temp ->next = nodetoinsert;

}

int main()
{
    // Creating the first node
    Node *node1 = new Node(10);
    // cout << node1->data << endl; // Print data of the node
    // cout << node1->next << endl; // Print the next pointer (should be NULL)

    // Set head of the linked list to node1
    Node *head = node1;
    Node *tail = node1;

    // Call the print function to display the list
    print(head);
    cout << endl;

    insertatbein(head, 50);
    print(head);
    cout << endl;
 
    insertatend(tail, 80);
    print(head);
    cout<<endl;

    insertatposition(head,1,76);
    print(head);

    return 0;
}
