/*
Given an array arr of size n−1 that contains distinct integers in the range of 1 to n (inclusive), find the missing element. 
The array is a permutation of size n with one element missing. Return the missing element.
Input: n = 5, arr[] = [1,2,3,5]
Output: 4
Explanation : All the numbers from 1 to 5 are present except 4.
*/

#include<iostream> 
#include<vector> 
#include<algorithm>

using namespace std; 

int missing(vector<int> &arr,int n)
{
    int missing = -1; 
    sort(arr.begin(),arr.end());
    int iCnt = 1; 

    if(n == 0 ) return -1; 
    
    for(int i = 0; i < n-1; i++)
    {
        if(iCnt != arr[i])
        {
            missing = iCnt; 
            break; 
        }
        iCnt++; 
    }
    if(missing == -1)
    {
        missing = n; 
    }

    return missing; 
}

int main()
{
    // Give Input: 
    vector<int> arr = {}; 
    int n = 0; 

    int iRet = missing(arr,n); 

    cout<<"Missing is: "<<iRet; 

    return 0; 
}