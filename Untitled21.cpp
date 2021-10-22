// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start]; 
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} 
}	 


/* Driver function to test above functions */
int main() 
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	
	int n = sizeof(arr) / sizeof(arr[0]); 

	// To print original array 	
	for (int i = 0; i < n; i++)
	{
	cout << arr[i] << " ";
	cout << endl;
    }
	
	// Function calling
	rvereseArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;
	
	// To print the Reversed array 
	for (int i = 0; i < n; i++)
	{
	cout << arr[i] << " ";
	cout << endl;	
    }
	return 0;
}

