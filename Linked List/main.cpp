#include<iostream>
#include<list>
#include<string>
using namespace std;

void insert(int x);

void print();


struct Node
{
	string data;
	Node *next;

};

Node *head;


void insert(string x)
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
		cout << " " << temp->data;
		temp = temp->next;
	}

	cout << endl;
}

int main()
{

	head = NULL; // empty list

	int n, number;
	string x;

	cout << " How many numbers?: "<< endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: " << endl;
		cin >> x;

		insert(x);
		print();
	}



	system("pause");
	return 0;
}

