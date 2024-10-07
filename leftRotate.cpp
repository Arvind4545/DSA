#include<iostream> 
#include<vector>

using namespace std; 

void reverse(vector<int> &arr, int si, int ei,int k)
{
    int temp = 0; 
    for(int i = si; i <= (ei+k)/2; i++)
    {
        temp = arr[i]; 
        arr[i] = arr[ei - i + k]; 
        arr[ei - i + k] = temp; 
    }
}

void leftRotate(vector<int> &arr, int k)
{
    reverse(arr,0,k-1,0); 
    reverse(arr,k,arr.size()-1,k ); 
    reverse(arr,0,arr.size()-1,0); 
}

void display(vector<int> &arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<"\t"; 
    }

    cout<<endl; 
}

int main()
{
    vector<int> arr= { 1, 2, 3, 4 , 5};

    display(arr); 

    leftRotate(arr, 12 % arr.size()); 

    display(arr); 
    return 0; 
}