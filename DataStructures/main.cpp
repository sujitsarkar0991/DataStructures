#include <iostream>
#include "LinkedList.h"

using namespace std;


int main(){
	LinkedList ll;
	ll.InsertAtFront(5);
	ll.InsertAtFront(4);
	ll.InsertAtFront(1);
	ll.print();
	cin.get();
}