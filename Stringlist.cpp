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
	size++;	
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
	size++;
}
void pop_front()
{
	llist ptr = saveptr = front;
	front = front ->next;
		if (front)
			front ->prev = front -> prev -> prev;
		else
			back = 0;
	delete saveptr;
	size--;
}
void pop_back()
{
	llist ptr = saveptr = back;
	back = back -> prev;
		if (back)
			back -> next = back ->next -> next;
		else
			front = 0;
	delete saveptr;
	size--;
}		
bool empty() 
{

}
void uniq()
{
	for(llist *ptr = front; ptr != 0; ptr = ptr ->next)
	{
		while(ptr -> next != 0 && ptr -> str = ptr -> next -> next)
		{
			llist ptr = saveptr = ptr -> next;
			ptr -> next = ptr -> next -> next;
			if(saveptr -> next != 0;)
				saveptr -> next -> prev = ptr;
			else
				back = ptr;
		delete saveptr;
		size--;
		}
	}
}

