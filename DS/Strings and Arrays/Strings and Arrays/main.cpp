#include<iostream>
#include<string>

using namespace std;

int main()
{
	string text;
	cout << "Enter a String " << endl;
	cin >> text;

	int size = text.length();

	string reverse;

	cout << " reverse string is:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << text[size - 1 - i];
	}



	system("pause");
	return 0;

	
}