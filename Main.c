
#include<stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    if(iNo1 < 0 || iNo1 > iNo2)
    {
        return -1;
    }

    int iSum = 0;

    for(int i = iNo1; i <= iNo2; i++)
    {
        iSum += i;
    }

    return iSum;
} 

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2); 
    
    if(iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("%d\n",iRet);
    }

    return 0;
}