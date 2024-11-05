

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



void InsertAtEnd(Node*& head, int Value)
{
    Node* new_node = new Node;

    new_node->Value = Value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node* LastNode = head;
    while (LastNode->next != NULL)
    {
        LastNode = LastNode->next;
    }

    LastNode->next = new_node;

    return;
}

//print the linked list
void PrintList(Node* head)
{
    cout << "\n";
    while (head != NULL)
    {
        cout << head->Value << " ";
        head = head->next;
    }
}


// Delete a node
void DeleteNode(Node*& head, int Value) {

    Node* Current = head, * Prev = head;

    if (head == NULL)
    {
        return;
    }

    if (Current->Value == Value) {
        head = Current->next;
        delete Current;//free from memory
        return;
    }

    // Find the key to be deleted
    while (Current != NULL && Current->Value != Value) {
        Prev = Current;
        Current = Current->next;
    }

    // If the value is not present
    if (Current == NULL) return;

    // Remove the node
    Prev->next = Current->next;
    delete Current;//free from memory

}
void DeleteAllNodes(Node* head, int LenghtOfNodes)
{

    while (head != NULL)
    {
        DeleteNode(head, LenghtOfNodes);
        LenghtOfNodes--;
    }
}


int main()
{
    Node* head = NULL;

    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtBeginning(head, 0);
 

    PrintList(head);

    DeleteAllNodes(head, 3);
  
    cout << "\ndone";
    
}
