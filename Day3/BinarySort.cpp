// ****************************************************************************
// * Name: Binary Sort cpp file ( savings.cpp filename )                      *
// * Description: This file will perform a binary sort algorithm on a array   *
// * Author: Zachary Mollenhour                                               *
// * Date: August 4th 2020 ( last modified )                                  *
// ****************************************************************************

#include <iostream>
using namespace std;

//Recrusive Binary Search Function
//Return the location of x in a given array
//otherwise return -1
int binarySearch(int arr[], int left, int right, int x)
{
    if(right >= 1) {
        int middle = left + (right - 1) / 2; 

        //if the element is present at the middle
        if(arr[middle] == x)
        {
            return middle;
        }

        //if element is smaller than middle, then 
        //it must be present in the left subarray
        if(arr[middle] > x)
        {
            return binarySearch(arr, left, middle - 1, x);
        }

        //Eles the element can only be present in the right
        //subarray
        return binarySearch(arr, middle+1, right, x);
    }

    //If we reach here then it was not present and we 
    //return -1
    return -1;
}

//main function
int main(void)
{
    //Declare array with size 50
    int arr[50];

    //for loop to iterate the loop 50 times
    for(int i=1; i<=50;i++)
    {
        //generate random numbers for array
        arr[i] = (rand() % 1000) + 1;
    }

    //value to search for in the array
    int x = 10;

    //get size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //perform binary search on the array
    int result = binarySearch(arr,0,n - 1, x);

    //Print out results
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is not present at index " << result;
    return 0;
}