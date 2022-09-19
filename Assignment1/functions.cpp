/*
Jayden Wehr
functions.cpp

*/
#include "functions.h"
#include <iostream>
using namespace std;


int checkForInt(int arr[], int numToLookFor, int currentIndex) {
	
	int indexOfNumber = -1;

	/*
	* Look through the entire array up to the current index that we are at.
	* If we find the number we are looking for, then return that number, if 
	* we don't find it then return -1.
	*/
	for (int i = 0; i < currentIndex; i++) {
		if (arr[i] == numToLookFor) {
			indexOfNumber = i;
			break;
		}
	}

	return indexOfNumber;
}

int modifyInt(int arr[], int indexOfNumber, int& newValue, int currentIndex) {

	//Check to make sure the index is a valid value. If the index is not a valid value then return -1.
	if (indexOfNumber >= 0 && indexOfNumber < currentIndex) {

		int oldNumber = arr[indexOfNumber];
		arr[indexOfNumber] = newValue;

		return oldNumber;

	}
	else {
		return -1;
	}


}

void addIntAtTheEnd(int arr[], int numberToAdd, int& currentIndex, int arrSize) {

	/*
	* Check to make sure that we haven't reached the capacity of the array.
	* 
	*/
	if (currentIndex != arrSize) {
		arr[currentIndex] = numberToAdd;
		currentIndex++;
	}
	else {
		cout << "Array is full. Cannot add any more integers" << endl;
	}

}

void removeInt(int arr[], int indexToRemove, int& currentIndex) {

	//Check for a valid input
	if (indexToRemove >= 0 && indexToRemove < currentIndex) {

		//Shift the elements left
		for (int i = indexToRemove; i < currentIndex - 1; i++) {
			arr[i] = arr[i + 1];
		}

		currentIndex--;

	}
	else {
		cout << "Invalid input was detected" << endl;
	}

	
}