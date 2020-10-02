/*
 * arrays.cpp
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel Parizi
 */

#include <bits/stdc++>
using namespace std;

int main() {
	
	int values[3];
	values[0] = 1;
	values[1] = 22;
	values[2] = 33;
	// print an array element
        cout << values[3] << endl;

	//another way to define array
	int valuesA[4] = { 1, 2, 4, 8 };

	for (int i = 0; i < 3; i++) {
           // multiplication of array
           cout << valuesA[i] * values[i] << endl;
	}
        // asisgn a array as empty
	int emptyArr[8] = { };

	for (int i = 0; i < 8; i++) {
		cout << i + 1 << setw(2) << flush;
	}
	cout << endl;
	//check strings
	string texts[] = { "apples", "kiwi", "dragonfruit" };

	for (int i = 0; i < 3; i++) {

		cout << "Element at index " << i << ": " << texts[i] << endl;
	}
	cout << endl;

	//*************************Mult-demensional arrays
        //here in multi  dimension array,index should be define except the first index   
	string animals[][3] = { { "fox", "dog", "wolf" }, { "lizard", "snake",
			"turtle" } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {

			cout << animals[i][j] << ", ";

		}

		cout << endl;
	}

	int valuesB[] = { 3, 6, 4, 88, 5 };

	cout << sizeof(valuesB[0]) << endl;  // 4 bytes of memory
	cout << sizeof(valuesB) << endl; // 20 bytes of memory
	cout << sizeof(int) << endl;     // 4 bytes
        // length of an array
	cout << sizeof(valuesB)/sizeof(valuesB[0]);
	// length of array by using pointer
	cout << *(&valuesB + 1) - valuesB;
	// int for index  must be unsigned in this circumstance
	for (unsigned int i = 0; i < sizeof(valuesB) / sizeof(int); i++) {
		cout << valuesB[i] << ", " << flush;
	}
	cout << endl;


	//*********brisk practice of switches in C++

	//char is intended to store bytes but its actually an integer type, as is long as well.
	//break; must be used
	int input;
	cout << "Input the magic number 1 - 5" << endl;
	cin >> input;

	switch (input) {

	case 0:
		cout << "Hello 0" << endl;
		break;
	case 1:
		cout << "Hello 1" << endl;
		break;
	case 3:
		cout << "Hello 3" << endl;
		break;
        // IF INPUT OTHER THAN 0, 1 & 3			
	default:
		cout << "Default" << endl;
	}

	return 0;

}
