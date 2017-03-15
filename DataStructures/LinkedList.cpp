#include <iostream>
#include "LinkedList.h"

using namespace std;



LinkedList::LinkedList()
{
	head = NULL;
}

LinkedList::~LinkedList()
{
	Node* current = head;
	Node* temp;
	while(current != NULL){
		temp = current->next;
		delete current;
		current = temp;
	}
}

void LinkedList::InsertAtFront(int data)
{
	Node* temp = new Node();
	//Node* temp = (Node*)malloc(sizeof(Node));
	if(temp == NULL)
	{
		cout<<"Unable to allocate Memory"<<endl;
		return;
	}
	else
	{
		temp->data = data;
		temp->next = head;
		head = temp;
	}
}

void LinkedList::print(){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL";
}
