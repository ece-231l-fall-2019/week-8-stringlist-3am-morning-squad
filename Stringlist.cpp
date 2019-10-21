#include <iostream>
#include <string>
#include "Stringlist.h"
StringList::StringList(){
	_front = 0;
	_back = 0;	
};

//bool operator=(){}

bool StringList::empty(front() == back()){
	return true;
}
void SringList::size(){


}

void StringList::clear(){

	return _llist == 0;

}	

void StringList::push_back(string str) {
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

void StringList::push_front(string str){
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

void StringList::pop_front()
{
	llist * saveptr = front;
	front = front ->next;
		if (front)
			front ->prev = front -> prev -> prev;
		else
			back = 0;
	delete saveptr;
	size--;
}

void StringList::pop_back()
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

void StringList::unique()
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
