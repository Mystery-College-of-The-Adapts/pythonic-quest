#pragma once

#include<string>
using std::string;
#ifndef _HASHTABLE
#define _HASHTABLE

class HASH
{
private:
	static const int tablesize = 10;
	struct item
	{
		string name;
		string drink;
		item *next;
	};

	item *Hashtable[tablesize];



public:
	HASH();
	int Hash(string key);
};



#endif