/* 
*@Author Glen McIntosh 
* 
* @Version CSC 234 Assignmet 1 Visual Basics Check Sheet 
*/





#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{

	cout << setiosflags(ios::fixed) << setprecision(6);
	//This sets the precision of the number to the alloted number of decimal places 

	int number1;
	double number2;
	char char1;
	string string1;
	string string2;

	cout << "Enter number 1 ";
	cin >> number1;

	cout << "Enter number 2 ";
	cin >> number2;

	cout << "Enter char 1 ";
	cin >> char1;

	cout << "Enter string 1 ";
	cin >> string1;

	cout << "Enter stirng 2 ";
	cin >> string2;

	cout << endl << setw(12) << number1  << endl << setw(12) << number2 << endl << setw(12) << char1  << endl << setw(12) << string1  << endl << setw(12) << string2 << endl;

	/*string string1 = "a";
	string string2 = "a";*/
	//for testing purposes 
	//looks like setw() alligns to the right to a specified number of spaces 

	if (string1.compare(string2) < 0) {
		cout << setw(12) << string1 << '\n' << setw(12) << string2;

	}
	else if ((string1.compare(string2) > 0)) {
		cout << setw(12) << string2 << setw(12) << '\n' << setw(12) << string1;

	}
	else {
		cout << setw(12) << "Strings are the same";
	}

	cout << endl;
	system("pause");
	return 0;
}

/* PROBLEMS
* problems with syntax and learning the small differences
* Problem with the \n because I had my slash the wrong way 
*/

