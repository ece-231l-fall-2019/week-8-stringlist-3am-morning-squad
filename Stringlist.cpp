#include <iostream>
#include "StringList.h"
#include <string>

class StringList{

	private: 
		typedef llist;
		llist *_front;
		llist *_back;
		size_t _size;

	public:


bool operator=(){



}

bool empty(){

}

bool size(){


}

bool clear(){

	return _llist == 0;

}	

void push_back(string str) {
	llist *ptr = new llist;
	ptr -> str = str;
	ptr -> next = 0;
	ptr ->prev = back;
	if (back != 0)
	
		back->next = ptr;
	else
		front = ptr;
back = ptr;
}
void push_front(string str){
	llist *ptr = new llist;
	ptr -> str = str;
	ptr -> prev = 0;
	ptr -> next = front;
		if (front != 0)
			front ->back = ptr;
		else
			back = ptr;
	front = ptr;
}

bool empty() 
}
