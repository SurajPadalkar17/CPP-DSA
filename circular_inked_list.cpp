#include <iostream>
using namespace std;

class Node
{
public:
    Node *head;
    Node *prev;
    Node *next;
    int data;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
    }
};

void insertnode(Node *&tail, int element, int d)
{

    if (tail == NULL)
    {
        Node *newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletenode(Node *&tail, int value)
{

    if (tail == NULL)
    {
        cout << "Lisnk is empty";
        return;
    }
    else
    {
        Node * prev = tail;
        Node * curr = prev ->next;

        while(curr -> data != value){
            prev = curr;
            curr = curr ->next;
        }
        prev->next = curr->next;
        curr->next = NULL ;
        delete curr;
    }
}
void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    Node *tail = NULL;
    insertnode(tail, 5, 3);
    print(tail);

    insertnode(tail, 3, 5);
    print(tail);

    insertnode(tail, 3, 7);
    print(tail);
    

    deletenode(tail,7);
    print(tail);

    return 0;

}