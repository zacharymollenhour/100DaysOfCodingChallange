// ****************************************************************************
// * Name: Bubble Sort cpp file ( savings.cpp filename )                      *
// * Description: This file will perform a bubble sort algorithm on a array   *
// * Author: Zachary Mollenhour                                               *
// * Date: August 4th 2020 ( last modified )                                   *
// ****************************************************************************

#include <iostream>
using namespace std;

//Function to swap the values in the array using pointers
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


//Function to perform the bubble sort on given array
void bubbleSort(int arr[],int n)
{
    int i , k;
    for(i = 0; i < n-1; i++)
    {
        //last i elements
        for(k = 0; k < n-i-1; k++)
        {
            //check the two elements and see if it is bigger
            if(arr[k] > arr[k+1])
                //swap the values
                swap(&arr[k], &arr[k+1]);
        }
    }
}

//function to print out the resulting array
void printArray(int arr[], int size)
{
    int i;
    for(i=0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//main function
int main()
{

    //Declare array with size 50
    int arr[50];

    //for loop to iterate the loop 50 times
    for(int i=1; i<=50;i++)
    {
        //generate random numbers for array
        arr[i] = (rand() % 1000) + 1;
    }

    //get size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    //Call Bubble Sort Function to sort the array
    bubbleSort(arr,n);

    //Print out the array
    cout << "Sorted Array: \n";
    printArray(arr,n);
    return 0;
}