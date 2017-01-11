#include<iostream>
#include<string>

using namespace std;

int main()
{
	string text;
	cout << "Enter a String " << endl;
	cin >> text;

	int size = text.length();

	

	//cout << " reverse string is:" << endl;
	
	
	int i = 0;
	int j = size - 1;
	int flag = 1;

	while (i < j )
	{
		if (text[i] != text[j])
			flag = 0;

		i++;
		j--;
	}

	if (flag == 0)
	{
		cout << "Text is not palindrome " << endl;

	}

	else
		cout << " Texte Is a palindrome" << endl;



	system("pause");
	return 0;


}