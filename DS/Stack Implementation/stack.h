#pragma once

#ifndef STACK_H
#define STACK_H
#include <vector>
using std::vector ;

template < class object>

class stack

{

private:
	vector<object> theArray;
	int tos;                                            // top of stack

public:

	stack();                                             // default constructor
	bool isempty();                                // return true if empty,else false
	void push(const object &x);           // insert x
	void pop();                                    // remove most recently inserted item
	void makeEmpty();                   // remove all items

	const object & top();                // return the most recent item
	object topAndpop();                //return and remove most recent item

};



#endif