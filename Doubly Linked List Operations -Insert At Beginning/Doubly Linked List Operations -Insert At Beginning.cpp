
#include <iostream>
using namespace std;

class Node {

public:
    int Value;
    Node* next;
    Node* prev;

};
void InsertAtBegining(Node*& head, int Value)
{
    Node* new_node = new Node();

    new_node->Value = Value;
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL)
    {
        head->prev = new_node;
    }
    
    head = new_node;
}



void PrintNodeDetails(Node* head)
{

    if (head->prev != NULL)
        cout << head->prev->Value;
    else
        cout << "NULL";

    cout << " <--> " << head->Value << " <--> ";

    if (head->next != NULL)
        cout << head->next->Value << "\n";
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
        cout << head->Value << " <--> ";
        head = head->next;
    }
    cout << "NULL";

}



int main()
{ 
    Node* head = NULL;

    InsertAtBegining(head, 5);
    InsertAtBegining(head, 4);
    InsertAtBegining(head, 3);
    InsertAtBegining(head, 2);
    InsertAtBegining(head, 1);

    cout << "\nLinked List Contenet:\n";
    PrintList(head);
    PrintListDetails(head);
    system("pause>0");
    
}

