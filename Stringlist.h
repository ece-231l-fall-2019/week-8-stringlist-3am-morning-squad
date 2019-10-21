#include <iostream>
#include <string>
#ifndef Included_Stringlist_H
#define Included_Stringlist_H
typedef std::string  string;

class StringList{

        private:
                struct llist{
			int data;
                        int *_next;
                        int *_prev;
                };
		llist *_front;
		llist *_back;
                size_t _size;

        public:
	
	StringList();

	~StringList();	

       // bool operator=();

        bool empty();

        void size();

        void clear(); 

        void push_back(string str);

        void push_front(string str);
        
        void pop_front();

        void pop_back();              

        void uniq();
};
#endif
