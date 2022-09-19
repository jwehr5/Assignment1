/*
Jayden Wehr
main.cpp

*/

#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;

int main() {

	ifstream inputFile;
	int number;
	inputFile.open("numbers.txt");

	//Error message if file couldn't be opened.
	if (inputFile.fail()) {
		cout << "Error could not open file" << endl;
	}

	//The array will have a capacity of 150 elements, but only 100 will be initally filled leaving room for 50 more.
	const int ARR_SIZE = 150;
	int arr[ARR_SIZE];

	//Keep track of the current index we are at in the array.
	int currentIndex = 0;
	
	//Read through every number in the file until we reach the end. Increase currentIndex by 1 every time we add an element.
	while (inputFile >> number && currentIndex != ARR_SIZE) {
		arr[currentIndex] = number;
		currentIndex++;
	}

	//Testing
	cout << "//////// TESTING CHECKFORINT() //////////" << endl;
	cout << "Value of element at index 45: " << arr[45] << endl;
	cout << "Calling checkForInt(): ..." << endl;
	cout << "Index of " << arr[45] << " is: " << checkForInt(arr, arr[45], currentIndex) << endl << endl;

	cout << "Let's look for the index of 1000. (There is no 1000 in the array)." << endl;
	cout << "Calling checkForInt(): ..." << endl;
 	cout << "Index of 1000 is: " << checkForInt(arr, 1000, currentIndex) << endl;
	cout << "/////////////////////////////////////////" << endl << endl;


	cout << "//////// TESTING MODIFYINT() ///////////" << endl;
	cout << "Value at index 30 is currently: " << arr[30] << " Let's change it to 305" << endl;
	int n = 305;
	cout << "After calling ModifyInt(), the old value was: " << modifyInt(arr, 30, n, currentIndex) << endl;
	cout << "And the new value is now: " << arr[30] << endl << endl;
	
	cout << "Let's try passing in a negative index" << endl;
	n = 230;
	cout << "Let's try passing in an index of -4 and we'll set the new value to be 230" << endl;
	cout << "After calling ModifyInt(), the old value was: " << modifyInt(arr, -4, n, currentIndex) << endl << endl;

	cout << "The current index we are at is: " << currentIndex << endl;
	cout << "Let's try modifying the value at this index and we'll set the value to 440. (We shouldn't be able to modify the value at this index)." << endl;
	n = 440;
	cout << "After calling ModifyInt(), the old value was: " << modifyInt(arr, currentIndex, n, currentIndex) << endl;
	cout << "/////////////////////////////////////////" << endl << endl;


	cout << "//////// TESTING ADDINTATTHEEND() //////////" << endl;
	cout << "The current index we are at is: " << currentIndex << endl;
	cout << "Let's add a value of 623 to the array" << endl;
	cout << "Calling addIntAtTheEnd(): ..." << endl; 
	addIntAtTheEnd(arr, 623, currentIndex, ARR_SIZE);
	cout << "The value at index " << currentIndex - 1 << " is: " << arr[currentIndex - 1] << endl << endl;

	cout << "Let's set currentIndex to " << ARR_SIZE << " and see what happens when we try to add an element" << endl;
	int temp = currentIndex;
	currentIndex = 150;
	cout << "Let's add a value of 432 to the array:" << endl;
	cout << "Calling addIntAtTheEnd(): ";
	addIntAtTheEnd(arr, 432, currentIndex, ARR_SIZE);
	currentIndex = temp;
	cout << "/////////////////////////////////////////" << endl << endl;

	
	cout << "//////// TESTING REMOVEINT() //////////" << endl;
	cout << "The current index we are at is: " << currentIndex << endl;
	cout << "The value at index 75 is " << arr[75] << " and the value of at index 76 is " << arr[76] << endl;
	cout << "Let's remove the value at index 75" << endl;
	cout << "Calling removeInt(): ..." << endl;
	removeInt(arr, 75, currentIndex);
	cout << "The value at index 75 is now " << arr[75] << endl;
	cout << "The current index we are at is now " << currentIndex << endl << endl;

	cout << "Let's try passing in a negative index of -5" << endl;
	cout << "Calling removeInt(): ";
	removeInt(arr, -5, currentIndex);

	cout << endl;
	cout << "Let's try removing the value at index " << currentIndex << endl;
	cout << "Calling removeInt(): ";
    removeInt(arr, currentIndex, currentIndex);
	cout << "/////////////////////////////////////////" << endl << endl;

	

	inputFile.close();
	return 0;
}