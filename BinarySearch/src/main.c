/* Author: TheBopDev
 * GitHub: github.com/TheBopDev
 * File created: 2024-12-05
 * File modified: 2024-12-05
 */


#include <stdio.h>

int fi_binarySearchInt(int pai_arr[], int i_startIndex, int i_stopIndex, int i_x);

int main(int argc, char** argv[])
{
	printf("Binary search algorithm tutorial\n\n");


	// We only care about the algorithm here. Therefore, we can assume the data
	// already exists elsewhere. So that's why we hard-code this in here.
	
	// 17 elements
	int ai_intArrayData[]={1, 5, 6, 9, 11, 22, 29, 36, 37, 39, 55, 84, 89, 90, 98, 102, 114, 158};


	int i_valueToSearchFor;
	int i_binarySearchInt = fi_binarySearchInt(ai_intArrayData, 0, 16, 158);
	printf("Index: %d\n", i_binarySearchInt);

	return 0;
}

// Pre: Assumes the data is only ints.
// Assumes the data is already sorted.
int fi_binarySearchInt(int pai_arr[], int i_startIndex, int i_stopIndex, int i_x)
{
	int i_retError = -1234;
	int i_middleIndex;

	while (i_startIndex <= i_stopIndex)
	{
		// Get the middle index
		i_middleIndex = i_startIndex + (i_startIndex + i_stopIndex) / 2; // Get the middle number
		printf("\nMiddle Index: %d\n", i_middleIndex);
		printf("Start Index: %d\n", i_startIndex);
		printf("Stop Index: %d\n", i_stopIndex);



		if (pai_arr[i_middleIndex] == i_x)
		{
			printf("\n\nFound the Index: %d\n\n", i_middleIndex);
			return i_middleIndex;
		}
		else if (pai_arr[i_middleIndex] < i_x)
		{
			i_startIndex = i_middleIndex + 1;
		}
		else
		{
			i_stopIndex = i_middleIndex - 1;
		}
	}

	
	printf("\n\nfi_binarySearchInt error: Value not found.\n");
	return i_retError;
}
