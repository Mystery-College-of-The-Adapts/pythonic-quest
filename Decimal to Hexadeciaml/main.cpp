#include<iostream>
#include<string>

using namespace std;

void hex(int n)

{

	if (n == 0) cout<< "0";

	if (n == 1) cout<< "1";

	if (n == 2) cout<< "2";

	if (n == 3) cout<< "3";

	if (n == 4) cout<< "4";

	if (n == 5) cout<< "5";

	if (n == 6) cout<< "6";

	if (n == 7) cout<< "7";

	if (n == 8) cout<< "8";

	if (n == 9) cout<< "9";

	if (n == 10) cout<< "A";

	if (n == 11) cout<< "B";

	if (n == 12) cout<< "C";

	if (n == 13) cout<< "D";

	if (n == 14) cout<< "E";


	else     cout<< "F";



}





void hexadecimal(long n)

{

	//hex(n % 16);


	if (n < 16)                // basis

		cout<<(n%16);


	else                    // recursion

		return hexadecimal(n / 16) ;

}


int main()
{

	int num;
	cin >> num;

	hexadecimal(num);
	system("pause");
	return 0;
}