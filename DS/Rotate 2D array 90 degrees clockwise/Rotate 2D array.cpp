#include<iostream>
using namespace std;

int main()
{

	int a[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {0,1,2} };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	cout << endl << endl;
		
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 4; i++)
			cout << a[4 -1 - i][j] << " ";

		cout << endl;
	}



	system("pause");
	return 0;

}