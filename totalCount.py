
def totalCount(list,k): 
    iCount = 0 
    for i in range(len(list)): 
        iCount = iCount + int(list[i]//k)
        if(list[i] % k != 0 ): 
            iCount += 1 

    return iCount

def main(): 
    list = [5, 8, 10, 13]
    k = int(input())

    ret = totalCount(list,k)

    print(ret)

if(__name__=="__main__"): 
    main()