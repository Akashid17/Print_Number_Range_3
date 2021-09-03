
def RangeSum(iNo1, iNo2):

    if iNo1 < 0 or iNo1 > iNo2:
        return -1

    iSum = 0

    for x in range(iNo1,iNo2+1):
            iSum += x
   
    return iSum

def main():

    iValue1 = int(input("Enter First Number\n"))
    iValue2 = int(input("Enter Second Number\n"))
    
    iRet = RangeSum(iValue1,iValue2)

    if iRet == -1:
        print("Invalid Range")
    else:
        print(iRet)

if __name__ == "__main__":
    main()