#include<stdio.h>//for printf and scanf
#include<stdlib.h>//for malloc and free

void Display(int Arr[],int Size)//  * = []
{
    int iCnt = 0;
    for (iCnt=0 ; iCnt <Size ; ++iCnt )
    {
        printf("%d ", Arr[iCnt]);
    }
    printf("\n");
}
int main()
{
    int iCount = 0;
    int *ptr = NULL;

    printf("Enter the number of element : \n");
    scanf("%d",&iCount);

    ptr =(int *)malloc(iCount * sizeof(int));

    printf("Enter the Elements :\n");
    for (int iCnt=0 ;iCnt< iCount ;iCnt++)
    {
    scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    return 0;
}