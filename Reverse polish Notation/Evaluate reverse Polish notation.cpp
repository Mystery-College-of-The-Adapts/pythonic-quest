#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <stack>
#include <sstream>
#include <cstring>
#include <cctype>

using namespace std;
using std::vector;
using std::string;

int main()
{
	stack <int> s;
	int N, i = 0;
	bool undefined;
	string dummy;

	cin >> N;
	getline(cin, dummy);

	int a, b;
	string sequence;
	string tokens;

	while (i < N)
	{
		getline(cin, sequence);
		stringstream sin(sequence);
		undefined = false;

		while (sin >> tokens)
		{
			if (isdigit(tokens[0]))
				s.push(atoi(tokens.c_str()));

			else
			{
				switch (tokens[0])
				{
				case '+':
					b = s.top();
					s.pop();
					a = s.top();
					s.pop();
					s.push(a + b);
					break;

				case '-':
					b = s.top();
					s.pop();
					a = s.top();
					s.pop();
					s.push(a - b);
					break;

				case '*':
					b = s.top();
					s.pop();
					a = s.top();
					s.pop();
					s.push(a*b);
					break;

				case '/':
					b = s.top();
					s.pop();
					if (b == 0)
						undefined = true;
					else
					{
						a = s.top();
						s.pop();
						s.push(a / b);
					}

					break;
				}
			}

		}
		if (undefined)
			cout << "UNDEFINED" << endl;
		else
		{
			cout << s.top() << endl;
			s.pop();
		}

		i++;

	}
	return 0;
}
//
//int Evaluate( string args)
//{
//
//	int result = 0;
//	bool undefined;
//	stack<int>nums;
//
//	for (int i = 0; i < args.length; i++)
//	{
//		string element = args[i];
//
//
//		// if the element is an operation, pop the two numbers and evaluate them
//		if ((element == "+") || (element == "-") || (element == "*") || (element == "/"))
//		{
//			int a = nums.top();
//			nums.pop();
//			
//			int b = nums.top();
//			nums.pop();
//
//
//			switch (element[0])
//			{
//			case '+':
//				nums.push(a + b);
//				break;
//
//			case '-':
//				nums.push(b - a);
//				break;
//
//			case '*':
//				nums.push(a * b);
//				break;
//
//			case '/':
//				if (a == 0)
//					undefined = true;
//				else
//				    nums.push(b / a);
//				
//			break;
//
//			}
//
//
//		}
//
//		else         //push a number into the stack
//		{
//			 int number;
//		     istringstream(element) >> number;
//			 nums.push(number);
//
//		}
//
//	}
//
//
//	 
//
//
//
//}
//
//int main()
//{
//	/*vector<string>args(1);
//	for (int i = 0; i < args.size(); i++)
//		getline(cin,args[i]);*/
//
//
//	string args;
//	cin >> args;
//	
//	cout << "the Value is: " <<Evaluate(args);
//
//
//	system("pause");
//	return 0;
//
//
//
//}

s.charAt(end) 

