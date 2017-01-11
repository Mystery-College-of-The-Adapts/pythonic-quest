#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void ReverseQueue(queue<int>&s)
{
	stack<int>R;
	while (!s.empty())
	{
		int x = s.front();
		R.push(x);

		s.pop();
	}

	while (!R.empty())
	{
		int y = R.top();
		s.push(y);
		R.pop();
	}
}

int main()
{
	queue<int>s;
	s.push(1);
	s.push(2);

	ReverseQueue(s);

	cout << "My Queue list is:" << endl;
	while (!s.empty())
	{
		int item = s.front();
		cout << item << endl;
		s.pop();
	}

	cout << endl;

	



	system("pause");
	return 0;

}