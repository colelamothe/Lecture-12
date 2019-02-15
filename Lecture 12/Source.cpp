// Lecture 12 supplementary program

#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

int main() {


	// Example 1
	/*
	// Variable Declaration
	char grade;

	// Introducing the toupper command. Changes lowercase to uppercase
	char temp = 'a';
	cout << "Lower case input: " << temp << endl;
	temp = toupper(temp); // converts lower case character to upper case and leaves upper case alone.
	cout << "Upper case output: " << temp << endl;


	//input
	cout << "Please enter your Letter grade: " << endl;
	cin >> grade;





	switch (toupper(grade)) { // This assigns grade as the variable to check against through the cases and uses the toupper command to validate the input to only uppercase input
		case 'A':
			cout << "Excellent work" << endl;
			break;
		case 'B':
			cout << "Good work" << endl;
			break;
		case 'C':
			cout << "Average work" << endl;
			break;
		case 'D':
			cout << "Passable work" << endl;
			break;
		case 'F':
			cout << "Poor work" << endl;
			break;
		
		default:
			cout << "Invalid Grade" << endl;
	}
	*/

	// Example 2
	/*
	//Switch can also be used in a "fallthrough" situation where it will exectute multiple tests
	char letter;
	int vowels = 0;
	int other = 0;

	cout << "Enter letters: " << endl;
	cin >> letter;

	while (letter != 'u') { // runs the program until the user enters the l;etter 'u'

		switch (letter) { // This comparison lets the compiler fall through all following statements until it hits a break
			// any letters that are vowels are evaluated before u and will fall through to the definition under case 'u' and anything else will go to default
		case 'e':
		case 'a':
		case 'i':
		case 'o':
		case 'u': vowels++;
			break;
		default: other++;
		}
		cin >> letter; // Gets the next letter
	}

	cout << "vowels: " << vowels << " Other: " << other << endl; // outputs the counters

	*/

	// Example 3


	system("pause");
	return 0;
}