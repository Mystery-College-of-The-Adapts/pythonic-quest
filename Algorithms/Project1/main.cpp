#include<iostream>
#include<vector>



using namespace std;
using std::vector;



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



	vector<int>arr(10);
	
	for (int i = 0; i < arr.size(); i++)
		arr.push_back(5*i);

	/*arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(20 * 30);*/
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
		cout << *it << " " << endl;

	system("pause");
	return 0;
}