#include<iostream>
#include<string>

using namespace std;


void print(string &str)
{
	for (int i = 0; i < str.length(); i++)
		cout << str[i];

	cout << endl;
}

void swap(string &str, int i, int j)
{
	char temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}

void Reverse(string &str)
{
	int i = 0;
	int j = str.length() - 1;

	while (i < j)
	{
		swap(str, i, j);
		i++;
		j--;

		
	}

	print(str);

	
}





int main()
{
	string str;
	cout << " Enter a string :" << endl;
	cin >> str;

	Reverse(str);

	system("pause");
	return 0;

}
