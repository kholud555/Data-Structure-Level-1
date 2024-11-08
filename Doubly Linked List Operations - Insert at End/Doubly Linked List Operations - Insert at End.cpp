

#include <iostream>
using namespace std;
// Create a node
class Node
{
public:
    int value;
    Node* next;
    Node* prev;
};

void InsertAtBeginning(Node*& head, int value)
{

    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

Node* Find(Node* head, int Value)
{

    while (head != NULL) {

        if (head->value == Value)
            return head;


        head = head->next;
    }

    return NULL;


}

void InsertAtEnd(Node*& head , int Value)
{
    Node* new_node = new Node();

    new_node->value = Value;

    if (head == NULL)
    {
        new_node->prev = NULL;
        head = new_node;
    }
    else {
        Node* Current = head;
        while (Current->next != NULL)
        {
            Current = Current->next;
        }

        Current->next = new_node;
        new_node->next = NULL;
        new_node->prev = Current;


    }
  
}

void PrintNodeDetails(Node* head)
{

    if (head->prev != NULL)
        cout << head->prev->value;
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n";
    else
        cout << "NULL";

}

// Print the linked list
void PrintListDetails(Node* head)

{
    cout << "\n\n";
    while (head != NULL) {
        PrintNodeDetails(head);
        head = head->next;
    }
}

// Print the linked list
void PrintList(Node* head)

{
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";

}

int main()
{
    Node* head = NULL;

    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "\nLinked List Contenet:\n";
    PrintList(head);


    Node* N1 = Find(head, 5);

    cout << "\nInsert At End: \n";
    InsertAtEnd(N1, 500);
    PrintList(head);


    system("pause>0");

}
