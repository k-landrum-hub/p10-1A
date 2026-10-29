/*
* 4 digit arrays
* korbin landrum
* gets an array of 10 with 4 random digits
*/

#include<iostream>

using namespace std;


int generateRandNumbers(int numbers[], int size);

int main() {
	srand(time(NULL));
	int SIZE = 10;
	int numbers[10];

	generateRandNumbers(numbers, SIZE);
	//random intagers
	cout << "The random intagers: ";
	for (int i = 0; i < SIZE; i++) {
		cout << " " << numbers[i];
	}
	//Even indacies
	cout << endl << "Even Indacies: ";
	for (int i = 1; i < SIZE; i += 2) {
			cout << " " << numbers[i];
	}
	//even values
	cout << endl << "Even Numbers: ";
	for (int i = 0; i < SIZE; i++) {
		if (numbers[i] % 2 == 0) {
			cout << " " << numbers[i];
		}
		}
	// show the elements in reverse order
	cout << endl << "Reverse order: ";
	for (int i = SIZE - 1; i >= 0; i--) {
	
			cout << " " << numbers[i];
	}
	cout << endl;
}

int generateRandNumbers(int numbers[], int size) {

	for (int i = 0; i < size; i++) {
		numbers[i] =  (rand() % 8999)+1000;
	}

	return numbers[size];
}

