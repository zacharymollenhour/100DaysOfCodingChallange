// ****************************************************************************
// * Name: Insertion Sort cpp file ( insertion.cpp filename )                      *
// * Description: This file will perform a insertion sort algorithm on a array   *
// * Author: Zachary Mollenhour                                               *
// * Date: August 4th 2020 ( last modified )                                  *
// ****************************************************************************

#include <iostream>
using namespace std;
  
// Function to sort an array using insertion sort
// Algorithm
void insertionSort(int arr[], int n)  
{  
    //Index Variables
    int i, key, j;  

    //Loop through array
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr, that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
  
// A utility function to print an 
// with a size of n 
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
/* Main Function */
int main()  
{  
    //Declare Array and get size
    int arr[] = { 12, 11, 13, 5, 6 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    //Function Calls
    insertionSort(arr, n);  
    printArray(arr, n);  
  
    return 0;  
}  