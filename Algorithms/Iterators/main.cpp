#include <iostream>


template <typename Container>

void print(const Container & c, ostream & out = cout)
{
	if (c.empty())
		out << "(empty)";

	else
	{
		auto itr = begin(c);  // itr is a Container::const_iterator

		out << "[ " << *itr++; // print first item

		while (itr != end(c))
			out << "," << *itr++;

		out << " ]" << endl;
	}
}