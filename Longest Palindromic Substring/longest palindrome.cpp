#include<iostream>
#include<string>

using namespace std;
using std::string;


string helper(string s, int begin, int end)
{
	while (begin >= 0 && end <= s.length() - 1 && (s.at(begin) == s.at(end)))
	{
		begin--;
		end++;
	}

	return s.substr(begin + 1, end);
}



string longestPalindrome(string s)
{
	if (s.empty())
		return NULL;

	else if (s.length() == 1)
		return s;

	else
	{
		string longest = s.substr(0, 1);
		for (int i = 0; i < s.length(); i++)
		{
			//get longest palindrome with center of i 

			string tmp = helper(s, i, i);
			if (tmp.length() > longest.length())
				longest = tmp;
			

			// get longest palindrome with center of i, i + 1

			tmp = helper(s, i, i + 1);
			if (tmp.length() > longest.length())
				longest = tmp;
		}

		return longest;

	}

	
		
}




int main()
{
	string s;
	cin >> s;

	cout <<"The longest Palindrome is:"<< longestPalindrome(s) <<endl;

	system("pause");
	return 0;
}