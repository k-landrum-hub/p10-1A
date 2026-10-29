// probe.cpp - what does an array hold, and what is past the end?
#include <iostream>
using namespace std;
int main(void) {
	int values[5];
	cout << "Before assigning anything:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "values[" << i << "] = " << values[i] << endl;
	}
	for (int i = 0; i < 5; i++) {
		values[i] = (i + 1) * 10;
	}
	cout << "After assigning 10, 20, 30, 40, 50:" << endl;
	for (int i = 0; i <= 7; i++) {
		cout << "values[" << i << "] = " << values[i] << endl;
	}
	return 0;
}