#include <iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;
using std::string;

int main()
{

	string s;
	cin >> s;

	char ch;
	int value = 0;
	for (int i = 0; i < s.length(); i++)
	{
		ch = s[i];
		value += abs( ch * 10);
	}

	value = atoi(s[0]);

	cout << "string " << s << "=" << value << endl;
	system("pause");
	return 0;
}