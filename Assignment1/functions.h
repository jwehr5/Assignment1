/*
Jayden Wehr
functions.h

*/

#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/*
	checkForInt() looks for the index of a certain integer if its present in the array.

	@param arr[] This is the array of integers that we'll be looking through.
	@param numToLookFor This is the integer that we'll be looking for.
	@param currentIndex This is the current index which we are currently at in the array.
						The next integer to be added will be added at this index.

	@return the index where the integer we are looking for.
	@return -1 if we cannot find the index of the integer.

	@pre The array must not be empty.
*/
int checkForInt(int arr[], int numToLookFor, int currentIndex);


/*
	modifyInt() takes the index of an integer and changes the value to whatever is passed into the function.

	@param arr[] This is the array of integers.
	@param indexOfNumber This is the index where we'll modify the value of the integer.
	@param newValue This will be the value that will replace the existing value at the specified index.
	@param currentIndex This is the current index which we are currently at in the array.

	@return the old value that was located at the index.
	@return the new value that was passed in.
	@return -1 if the index passed in is a negative number or if greater or equal than the currentIndex.

	@pre The array must not be empty
*/
int modifyInt(int arr[], int indexOfNumber, int &newValue, int currentIndex);


/*
	addIntAtTheEnd() adds an integer to the end of the array

	@param arr[] This is the array of integers.
	@param numberToAdd This is integer that will be added to the end of the array.
	@param currentIndex This is current index which we are currently at in the array.
						The next integer to be added will be added at this index.
	@param arrSize This is the size of the array.

	@return the updated currentIndex after adding an new integer to the array.

	@pre The array must not be empty nor full.
*/
void addIntAtTheEnd(int arr[], int numberToAdd, int& currentIndex, int arrSize);


/*	removeInt() removes an integer from the array at the index that is passed in
* 
*	@param arr[] This is the array of integers.
*	@param indexToRemove This is index at which the integer will be removed.
*	@param currentIndex  This is current index which we are currently at in the array.
* 
*	@return the updated currentIndex after removing an integer from the array.
* 
*	@pre The array must not be empty.
*/
void removeInt(int arr[], int indexToRemove, int& currentIndex);




#endif 

