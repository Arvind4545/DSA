/*
Given an array arr. Find the majority element in the array. If no majority exists, return -1.
A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.
Examples: 

Input: arr[] = [3, 1, 3, 3, 2]
Output: 3
Explanation: Since, 3 is present more than n/2 times, so it is the majority element.

Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than n/2 times, so it is the majority element.

Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than n/2 times, so there is no majority element.

*/

#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std; 

int majorityElement(vector<int>& arr) {
    // Hashing 
    // 1: hash Array Creation: size would be equal to max element of arr + 1 
    int max = *max_element(arr.begin(),arr.end()); 
    vector<int> hashArray(max + 1, 0); 
    
    for(int i = 0 ; i < arr.size(); i++)
    {
        hashArray[arr[i]]++;    
    }
    
    // 2: Define Bound i.e Size of Array / 2 
    int bound = arr.size()/2; 
    int maxm = -1; 

    // 3: Find the Eleemnt which is greater than the max and bound at the same time
    for(int i = 1; i < hashArray.size(); i++)
    {
        if(hashArray[i]>bound && hashArray[i] > maxm)
        {
            maxm = i; 
        }
    }
    
    return maxm; 
}
int main()
{
    // Give Input: 
    vector<int> arr; 

    int iRet = majorityElement(arr); 

    cout<<"Missing is: "<<iRet; 

    return 0; 
}