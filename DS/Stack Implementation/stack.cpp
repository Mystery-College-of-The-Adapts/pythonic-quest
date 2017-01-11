#include"stack.h"

template < class object>
stack<object>::stack(): theArray(1)
{
	tos = -1;
}

template< class object >
bool stack<object>::isempty()
{

	return tos == -1;
}

template< class object>
void stack<object>::push(const object &x)
{
	if (tos == theArray.size() - 1)   // if the stack is full
		theArray.resize(theArray.size() * 2 + 1);   // double its size before pushing

	else
		theArray[++tos] = x;

}

template< class object>
void stack<object>::pop()
{
	if (isempty())
		return;

	else
		tos--;          // decrement the top of stack after poping an element out
}

template<class object>
const object & stack<object>::top()
{
	if (isempty())
		return;

	else
		return theArray[tos];
}

template<class object>
object stack<object>::topAndpop()
{
	if (isempty())
		return;

	else
		return theArray[tos];
}

template <class object>
void stack<object>::makeEmpty()
{

	tos = -1;

}


