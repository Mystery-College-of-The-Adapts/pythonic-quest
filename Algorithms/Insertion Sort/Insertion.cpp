//Insertion Sort: Sort items in array a
//comparable: must have copy constructor, operator = , and operator <

#include <iostream>
#include <vector>
#include<ctime>
using namespace std;
using std::vector;

/*template <class Comparable> *
void insertionSort(vector <int> & a)
{
	for (int p = 1; p < a.size(); p++)
	{
		int tmp = a[p];
		int j;

		for (j = p; j > 0 && tmp, a[j - 1]; j--)
			a[j] = a[j - 1];

		a[j] = tmp;
	}
}*/


int main()
{
	
	srand((unsigned)time(nullptr));
	// int n = rand() % 20 + 1;
	int n = 20;
	vector<int> a(n);

	for (int i = 0; i < a.size(); i++)
		a.push_back(rand() % 20 + 1);

	
	
	cout << "Vector before Sorting " << endl;
	for (auto it = a.begin(); it != a.end(); it++)
		cout << *it << " ";
	



	cout << endl << endl << endl << endl;

	/*vector<int>Sorted = insertionSort(a);


	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";*/



	system("pause");
	return 0;

}

