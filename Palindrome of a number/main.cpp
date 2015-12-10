#include<iostream>
using namespace std;

int main()
{
	int number;
	int reverse = 0;
	
	cout << "Enter a number" << endl;
	cin >> number;


	
	//cin >> number;
	
		int tmp = number;
		while (tmp != 0)
		{
			reverse = reverse * 10;
			reverse = reverse + tmp % 10;
			tmp = tmp / 10;

			cout << " reverse  " << reverse << " tmp " << tmp << endl;

		}

		if (number == reverse)
			cout << "The number: " << number << " is a palindrome" << endl;

		else
			cout << "The number: " << number << " is not a palindrome" << endl;
	


	system("pause");
	return 0;
}