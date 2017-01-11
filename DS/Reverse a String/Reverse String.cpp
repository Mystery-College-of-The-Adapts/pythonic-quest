#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::vector;
using std::string;

int main()
{
	vector<string>word(3);
	
	cout << " Enter a string/a sentence of words " << endl << endl;

   for (int i = 0; i < word.size(); i++ )
          getline(std::cin, word[i]);

   //for (auto iter = word.begin(); iter != word.end(); iter++)
	  // cout << *iter << endl;

   cout << endl << endl << endl;

   
   for (int i = word.size() - 1; i >= 0; i--)
	   cout << word[i] << endl;

	system("pause");
	return 0;

}
