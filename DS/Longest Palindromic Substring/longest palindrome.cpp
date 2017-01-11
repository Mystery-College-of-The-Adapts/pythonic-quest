#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;

// To execute C++, please define "int main()"
// find the larger number in two inputs
//ternary operator; 
/*assume that a user inputs numbers, stored them in memory. search for a particular number, provided by a user*/
//hello...9,2,3,4,5
//hello, hell9,hel49, he329, h5329, 54329

void toint(string &s, vector<char>&numbers)
{
	int len = s.length();
	
	for (int i = 0; i < len; i++)
	{
		s[i] = numbers[len-1-i];
		
		
	}

	cout << s << endl;
}



int main() {

	string s = "helloy";

	vector <char> numbers;

	numbers.push_back('5');
	numbers.push_back('6');
	numbers.push_back('4');
	numbers.push_back('7');
	numbers.push_back('2');
	numbers.push_back('1');

	for (vector<char>::iterator iter = numbers.begin(); iter < numbers.end(); iter++)
	{
		cout << *iter << " ";
	}

	cout << endl;

	cout << s << endl;

	toint(s,numbers);




	system("pause");
	return 0;
}