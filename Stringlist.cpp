#include <iostream>
#include "StringList.h"
#include <string>

class StringList{

	Private:
	typedef struct	_llist
	{
		std::string value;
		struct *_next;
		struct *_prev;
	} llist;

		
	Public:


bool operator=(){



}

bool empty(){

}

bool size(){


}

bool clear(){

	return _data == 0;

}	

void push_front(const T& C) {
	ptr = new list;
	ptr -> new = front;
	front = ptr;
	ptr -> next -> previous = ptr;

	

}
