/*
Problem Statement:
a: given an array of positive Integers(could be or could not be sorted)
b: have to shift the array towards right by specified places 

Input: 
Arr = {1, 2, 3, 4, 5}; 
k = 2 

Output: {4, 5, 1, 2, 3}; 

Arr = {1, 2, 3, 4, 5}; 
k = 5

Output: {1, 2, 3, 4, 5}; 
*/

#include<iostream> 
#include<vector>

using namespace std;

void reverseArray(vector<int> &arr,int si, int ei)
{
    int temp = 0; 

    while(si < ei)
    {
        temp = arr[si]; 
        arr[si] = arr[ei]; 
        arr[ei] = temp; 
        si++; 
        ei--; 
    }
}

void rightRotate(vector<int> &arr,int d)
{
    int n = arr.size(); 

    reverseArray(arr,0,(n-1)-d);  
    reverseArray(arr, n-d, n-1 );
    reverseArray(arr,0,n-1); 
}

void display(vector<int> &arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<endl; 
    }
}
int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5 };
    int d = 0; 

    cout<<"Enter the Number of places by which u want your array shift towards the right: "<<endl;  
    cin>>d; 
    rightRotate(arr,d%arr.size()); 

    display(arr); 
    return 0; 
}