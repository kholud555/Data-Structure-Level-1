

#include <iostream>
using namespace std;
// Creating a node
class Node {
public:
	int Value;
	Node* next;
	Node* prev;
};

int main()
{
	Node* head = NULL;

	Node* Node1 = NULL;
	Node* Node2 = NULL;
	Node* Node3 = NULL;
	Node* Node4 = NULL;

	// allocate 3 nodes in the heap
	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();
	Node4 = new Node();

	//Assign value values
	Node1->Value = 1;
	Node2->Value = 2;
	Node3->Value = 3;
	Node4->Value = 4;

	//Connect nodes
	Node1->next = Node2;
	Node1->prev = NULL;

	Node2->next = Node3;
	Node2->prev = Node1;

	Node3->next = Node4;
	Node3->prev = Node2;

	Node4->next = NULL;
	Node4->prev = Node3;

	//print the linked list value
	head = Node1;
	while (head != NULL)
	{
		cout << head->Value << " ";
		head = head->next;
	}
}

