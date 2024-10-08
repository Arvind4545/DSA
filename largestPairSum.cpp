/*
Problem Statement: Given an array--> have to find out the second largest element from it 
Input: 12 34 10 6 40 
Output: 34 + 40 

Input: 12 40 10 34 6 
Output: 34 + 40 

Input: 34 ,34 ,31 , 10 ,6 
Output: 65 ---> In this case: Pair should be distinct--> hence sum = 34+31
*/

#include<iostream> 
#include<vector> 

using namespace std; 

int largestPairSum(vector<int> &arr)
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

    return secondMax + firstMax; 
}

int main()
{
    vector<int> arr = {0,0,1}; 

    cout<<"Largest Pair Sum is: "<<largestPairSum(arr); 

    return 0; 
}