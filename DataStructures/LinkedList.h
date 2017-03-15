#ifndef LINKED_LIST_INCLUDE
#define LINKED_LIST_INCLUDE



struct Node
{
	int data;
	struct Node* next;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void InsertAtFront(int data);
	void print();

private:
	Node* head;

};


#endif