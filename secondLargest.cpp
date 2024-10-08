/*
Problem Statement: Given an array--> have to find out the second largest element from it 
Input: 12 34 10 6 40 
Output: 34

Input: 12 40 10 34 6 
Output: 34 
*/

#include<iostream> 
#include<vector> 

using namespace std; 

int secondLargest(vector<int> &arr)
{
    int firstMax = INT_MIN; 
    int secondMax = INT_MIN; 

    for(int i = 0; i < arr.size(); i++ )
    {
        if(arr[i] > firstMax)
        {
            secondMax = firstMax; 
            firstMax = arr[i]; 
        }
        else if(arr[i] > secondMax && arr[i] != firstMax)
        {
            secondMax = arr[i]; 
        }
    }

    return secondMax; 
}

int main()
{
    vector<int> arr = {34 ,34 ,31 , 10 ,6  }; 

    cout<<"Second Largest is: "<<secondLargest(arr); 

    return 0; 
}