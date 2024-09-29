
# Given is array which contains positive Natural Integers in a Sorted Fashion 
# But the twist is, One number is missing and one is repeating.
# task is find the same----> which is missing and which is repeating. 

# Sample Input: 1 2 3 3 4 
# Sample Output: Missing is 5; Repeating is 3 

def missingRepeating(arr): 
    myList = [0]*(len(arr)+1)
    
    for i in range(len(arr)):
        myList[arr[i]] = myList[arr[i]] + 1 
 
    for i in range(1, len(myList)): 
        if(myList[i] == 0): 
            missing = i 
        elif(myList[i] == 2): 
            repeating = i 
    
    print(missing, end = "\n")
    print(repeating)

def main(): 
    list = [1, 1, 2, 3, 4, 6]

    missingRepeating(list)

if __name__=="__main__":
    main()