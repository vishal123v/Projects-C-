// SortingColors.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void sortColor(vector<int> arr, int n)
{
	map<int, int>freqMap;
	for (auto i = arr.begin(); i != arr.end(); i++)
	{
		freqMap[*i]++;
	}
	int i = 0;
	for (auto it : freqMap)
	{
		int value = it.first;
		int freq = it.second;

		for (int j = 0; j < freq; j++)
		{
			arr[i++] = value;
		}
	}
	//print sorted colors

	for (auto i = arr.begin(); i != arr.end(); i++)
		cout << *i << ' ';
}

int main()
{
	vector<int> arr = { 1, 0, 1, 2, 0 };
	int n = arr.size();

	sortColor(arr, n);

	return 0;
}

