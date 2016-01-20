#include<iostream>
#include<string>

using namespace std;

string reverse(string &str)
{
	int start = 0;
	int end = str.length() - 1;
	while (start < end)
	{
		str[start] ^= str[end];
		str[end] ^= str[start];
		str[start] ^= str[end];

		++start;
		--end;

	}

	//cout << str << endl;
	return str;
}

int main()
{
	string str;
	cin >> str;

	reverse(str);
	cout << str << endl;
	system("pause");
	return 0;
}