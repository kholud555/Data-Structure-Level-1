// Operations - Find.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

Node* Find(Node* head, int Value)
{
    while (head != NULL)
    {
        if (head->Value == Value)
        {
            return head;
           
        }
        head = head->next;
    }
    return NULL;
}

void InsertAfter(Node*& Perv_node, int Value)
{
    if (Perv_node == NULL)
    {
        cout << "\n The given pervious node cann't be null";
        return;
    }

    Node* new_node = new Node();

    new_node->Value = Value;
    new_node->next = Perv_node->next;

   
    Perv_node->next = new_node;
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

    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    PrintList(head);
    Node* N1 = NULL;
    N1 = Find(head, 2);

  /*  InsertAfter(N1, 500);
    cout << endl;
    PrintList(head);*/

    DeleteAllNodes(head, 5);
    cout << NULL << endl;

}
