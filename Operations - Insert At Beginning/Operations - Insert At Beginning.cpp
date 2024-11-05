

#include <iostream>
using namespace std;
class Node {
public:
    int Value;
    Node* next;
};

void InsertAtBeginning(Node*& head, int Value)
{
    //Allocate memory to a node
    Node* new_node = new Node();

    //insert the data
    new_node->Value = Value;
    new_node->next = head;

    // Move head to new node 
    head = new_node;
}

//print the linked list
void PrintList(Node* head)
{
    while (head != NULL)
    {
        cout << head->Value << " ";
        head = head->next;
    }
}

int main()
{
    Node* head = NULL;

    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    PrintList(head);
}

