#include<iostream>
#include<list>
using namespace std;

void insert(int x);

void print();


struct Node
{
	int data;
	Node *next;

};

struct Node *head;


void insert(int x)
{
	Node * temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;

}

void print()
{
	Node *temp = head;
	cout << " The list is: " << endl;

	while (temp != NULL)
	{
		cout <<" " << temp->data;
		temp = temp->next;
	}

	cout << endl;
}