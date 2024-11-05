
#include <iostream>
using namespace std;

// Create Node
class Node {
public:
    int Value;
    Node* next;
};

int main()
{
    Node* head;

    //Initialize Node (without Address)
    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    // Allocate 3 node in the heap (Dynimacal Memory)
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    Node1->Value = 1;
    Node2->Value = 2;
    Node3->Value = 3;

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL;

    head = Node1;

    while (head != NULL)
    {
        cout << head->Value << endl;
        head = head->next;
    }

}
