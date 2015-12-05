#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
using std::vector;



template<class Comparable>

int binarySearch(const vector <Comparable> &a, const Comparable &x)

{
	int low = 0;
	int high = a.size() - 1;
	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (a[mid] < x)
			low = mid + 1;

		else if (a[mid] > x)
			high = mid - 1;

		else
			return mid;
	}

	return -1; // NOT_FOUND = -1

}


int main()
{

	vector<int>Array;

	//srand(time(nullptr));

	//for (int i = 0; i < Array.size(); i++)
		//Array.push_back( rand() % 20 + 1);

		Array.push_back(20);
		Array.push_back(30);
		Array.push_back(40);
		Array.push_back(50);
		Array.push_back(60);
		Array.push_back(70);
		Array.push_back(80);
		Array.push_back(90);
		Array.push_back(150);
		Array.push_back(170);
		Array.push_back(200);
		


	cout << "Vector " << endl;
	for (vector<int>::iterator it = Array.begin(); it != Array.end(); it++)
		cout << *it << endl;

	cout << endl << endl << endl << endl;
  cout << binarySearch(Array, 80) <<endl;
	
	system("pause");
	return 0;
}