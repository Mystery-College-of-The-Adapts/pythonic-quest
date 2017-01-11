#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string compress(string str)
{
	string mycurrent = "";
	char ch;
	int j = 0;
	for (int i = 0; i < str.length();i++)
	{
		ch = str[i];
		j = i;
		mycurrent += ch;
		int counter = 1;
		while (ch == str[j + 1])
		{
			counter++;
			j++;
		}

		mycurrent += (counter + 48);
			
	}

	cout << mycurrent << endl;
	return mycurrent;
}

string decompress(string mystr)
{
	string current = "";
	char ch;
	for (int i = 0; i < mystr.length();i+=2)
	{
		ch = mystr[i];
		int num = mystr[i + 1] - 48;
		
		for (int j = 0; j < num;j++)
			current += ch;

	}

	cout << current << endl;
	return current;
}


int main()
{
	string str = "aaaaabbbccccdd";
	string mystr = "a5b3c4d2m7";
	compress(str);
	decompress(mystr);
	
	system("pause");
	return 0;

}