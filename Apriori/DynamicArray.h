/*
Author: Samuel Poquette
Class: CSI-281-02
Assignment: PA4
Date Assigned: 10/1/2015
Date Due: 10/17/2015

Description:
This program takes lists of numbers from text files, loads them into an array, a linked list,and a doubly linked list and performs a test timing how long add, delete, and search functionstake on the data structures, both sorted and unsorted.
Certification of Authenticity:
I certify that this is entirely my own work, except where I have given fullydocumented
references to the work of others. I understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of
academic staff; and/or
- Communicate a copy of this assignment to a plagiarism checking service
(which may then retain a copy of this assignment on its database for
the purpose of future plagiarism checking)
*/

#pragma once

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

template <class T>
class DynamicArray
{
private:

	T* mArray;
	int mCount;
	int mSize;

public:
	DynamicArray(int size);
	~DynamicArray();

	T getData(int index);

	void clear();
	bool addItemSorted(T data);
	bool addItemUnsorted(T data);
	bool isExist(T searchkey);
	bool removeAt(int index);
	void resize(int newSize);

};


/*     Pre:  None
*     Post:  Dynamic Array is created
*  Purpose:  To create a dynamic array
*****************************************************************************/
template <class T>
DynamicArray<T>::DynamicArray(int size)
{
	mCount = 0;
	mSize = (size);
	mArray = new T[mSize];
}


/*     Pre:  None
*     Post:  Dynamic Array is deleted
*  Purpose:  To delete the dynamic array
*****************************************************************************/
template <class T>
DynamicArray<T>::~DynamicArray()
{
	delete[] mArray;
}


/*     Pre:  The dynamic array exists and an index value is given
*     Post:  A data value is returned
*  Purpose:  To return a specific data value at a given index
*****************************************************************************/
template <class T>
T DynamicArray<T>::getData(int index)
{
	return mArray[index];
}


/*     Pre:  The dynamic array exists
*     Post:  The array is cleared of all data values
*  Purpose:  To clear a dynamic array without deleting it
*****************************************************************************/
template <class T>
void DynamicArray<T>::clear()
{
	mCount = 0;

	for (int i = 0; i < mSize; i++)
		mArray[i] = NULL;
}


/*     Pre:  The dynamic array exists and a data value is given
*     Post:  The data value is added into a sorted position 
*  Purpose:  To add data to an array sorted
*****************************************************************************/
template <class T>
bool DynamicArray<T>::addItemSorted(T data)
{
	T next = data;
	bool added = false;

	if (mCount == mSize)
		return false;

	else
	{
		mCount++;

		for (int i = 0; i < mSize; i++)
		{
			if (mArray[i] > data || added == true && mArray[i] < mSize)
			{
				T tmp;

				tmp = mArray[i];
				mArray[i] = next;
				next = tmp;
				added = true;
			}
		}
		if (added == false)
			mArray[mCount - 1] = data;

		return true;
	}	
}


/*     Pre:  The dynamic array exists and a data value is given
*     Post:  The data value is added past the last added value
*  Purpose:  To add data to an array unsorted
*****************************************************************************/
template <class T>
bool DynamicArray<T>::addItemUnsorted(T data)
{
	if (mCount == mSize)
		return false;

	mArray[mCount] = data;
	mCount++;
}


/*     Pre:  The dynamic array exists and a search key is given
*     Post:  Returns true if the search key is found in the array
*  Purpose:  To search for data within the dynamic array
*****************************************************************************/
template <class T>
bool DynamicArray<T>::isExist(T searchkey)
{
	for (int i = 0; i < mSize; i++)
		if (mArray[i] == searchkey)
			return true;

	return false;
}


/*     Pre:  The dynamic array exists and an index value is given
*     Post:  If the index value is valid, the data in it is cleared
*  Purpose:  To clear data at a specific index
*****************************************************************************/
template <class T>
bool DynamicArray<T>::removeAt(int index)
{
	if (mArray[index] != NULL)
	{
		mArray[index] = NULL;
		return true;
		mCount--;
	}
	return false;
}


/*     Pre:  The dynamic array exists and a new size is given
*     Post:  The array is deleted, and a new one created with the new size
*  Purpose:  To resize the array without the need to keep existing data
*****************************************************************************/
template <class T>
void DynamicArray<T>::resize(int newSize)
{
	mSize = newSize;
	delete[] mArray;
	mArray = new T [newSize];
}