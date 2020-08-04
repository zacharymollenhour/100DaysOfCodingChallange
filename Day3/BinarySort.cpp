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
