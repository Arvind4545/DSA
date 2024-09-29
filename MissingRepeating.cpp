/*
Given is array which contains positive Natural Integers in a Sorted Fashion 
But the twist is, One number is missing and one is repeating.
task is find the same----> which is missing and which is repeating. 

Sample Input: 1 2 3 3 4 
Sample Output: Missing is 5; Repeating is 3 
*/

#include<iostream> 
#include<vector> 

using namespace std; 

vector<int> missingRepeating(vector<int> &arr)
{
    vector<int> missingRepeating; 
    int missing = -1; 
    int repeating = -1; 
    int iSize = arr.size(); // 5 
    int hashArr[iSize + 1 ] = {0}; // 0 0 0 0 0 0 

    for(int iCnt = 0 ; iCnt < arr.size(); iCnt++)
    {
        hashArr[arr[iCnt]]++; 
    }

    for(int iCnt = 0 ; iCnt <= iSize ; iCnt++ )
    {
        if(hashArr[iCnt] == 0)
        {
            missing = iCnt; 
        }
        if(hashArr[iCnt] == 2)
        {
            repeating = iCnt; 
        }
    }

    missingRepeating.push_back(missing); 
    missingRepeating.push_back(repeating); 
    return missingRepeating; 
}

int main()
{
    vector<int> arr={1, 1, 2, 3, 4}; 

    vector<int> ret = missingRepeating(arr);

    cout<<"Missing Number is: "<<ret[0]<<endl; 
    cout<<"Repeating Number is: "<<ret[1]<<endl; 

    return 0; 
}
