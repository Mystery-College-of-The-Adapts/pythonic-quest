// look for Duplicates from a string and then print the duplicates out.


#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
using std::vector;


//
//bool ispermutation(string a, string b)
//{
//	if (a.length() != b.length())
//		return false;
//	else
//	{
//		for (int i = 0; i < a.length(); i++)
//		{
//			if (a[i] != b[i])
//				return false;
//			else
//				return true;
//		}
//	}
//
//}
//int main()
//{
//	
//
//	string a, b;
//	
//	cout << "please type a string" << endl;
//	getline(cin, a); 
//    getline(cin, b);
//
//
//	sort(a.begin(), a.end());
//	sort(b.begin(), b.end());
//
//	cout << a << endl;
//	cout << b << endl;
//
//	cout << ispermutation(a, b) <<endl;
//
//
//


int main()
{
	string a;
	cin >> a;
	int len = a.length();
	char current = a[0];
	int count = 1;
	cout << current << endl;

	for (int i = 0; i < len ;i++)
	{
		if (a[i] == current)
		{
			count++;
		}

		else
		{
			current = a.at(i);
		}
		//cout << a.at(i) << endl;
	}
	system("pause");
	return 0;
}