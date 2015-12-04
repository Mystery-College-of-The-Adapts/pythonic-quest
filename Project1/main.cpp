#include<iostream>

using namespace std;




int main()
{
	float a = 1.25;
	int result = 0;

	while (result < 25)
	{
		result += a;
	}

	cout <<"result1 = "<< result <<  endl<<endl;


	while (result < 52)
	{
		result += a;
	}

	cout <<"result2= " << result << endl;


	int array[20];

	for (int i = 0; i < 20; i++)
	{

		if (result == 0)
			break;
		else
		{
			array[i] = result % 2;
			result = result / 2;
		}


		//for (int i = 0; i < 20; i--)
			cout << endl<< array[i] << endl;
	}

	system("pause");
	return 0;
}