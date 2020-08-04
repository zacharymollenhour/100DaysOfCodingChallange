// ****************************************************************************
// * Name: XOR Sort cpp file ( insertion.cpp filename )                      *
// * Description: This file will perform a max XOR algorithm on a array   *
// * Author: Zachary Mollenhour                                               *
// * Date: August 4th 2020 ( last modified )                                  *
// ****************************************************************************

#include <iostream>
using namespace std;
  
int maxSubarrayXOR(int arr[], int n) 
{ 
    // Initialize result 
    int answer = INT_MIN;     
  
    // Pick starting points of subarrays 
    for (int i=0; i<n; i++) 
    { 
        //Varaible used to store the XOR of the current array
        int curr_xor = 0;  
  
        // Pick ending points of subarrays starting with i 
        for (int j=i; j<n; j++) 
        { 
            curr_xor = curr_xor ^ arr[j]; 
            answer = max(answer, curr_xor); 
        } 
    } 
    return answer; 
} 
  
// Main Function
int main() 
{ 
    int arr[] = {8, 1, 2, 12}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Max subarray XOR is " << maxSubarrayXOR(arr, n); 
    return 0; 
} 