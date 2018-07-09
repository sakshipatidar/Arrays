/*
 * arrays.cpp
 *
 *  Created on: Jul 9, 2018
 *      Author: justi
 */

#include <iostream>

using namespace std;

int main() {

	int values[3];

	values[0] = 1;
	values[1] = 22;
	values[2] = 33;

	cout << values[3] << endl;

	//short hand
	int valuesA[4] = { 1, 2, 4, 8 };

	for (int i = 0; i < 4; i++) {

		cout << valuesA[i] * valuesA[i] << endl;
	}

	int emptyArr[8] = { };

	for (int i = 0; i < 8; i++) {
		cout << i+1 << "  " << flush;
	}
	cout << endl;
	for (int i = 0; i < 8; i++) {

		cout << emptyArr[i] * emptyArr[i] << ", " << flush;
	}

	return 0;

}
