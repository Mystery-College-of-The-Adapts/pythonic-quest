#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{

	vector<int>a;
	int number;

	while (cin >> number)
	{
		a.push_back(number);
	}


	for (vector<int>::iterator itr = a.begin(); itr != a.end(); ++itr)
		cout << *itr << endl;
	
	cout << endl << endl;

	for (vector<int>::iterator itr = a.begin(); itr != a.end(); ++itr)
	{
		itr = a.erase(itr);
		

	
	
	system("pause");
	return 0;
}