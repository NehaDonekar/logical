//input : 4
//output : 4 3 2 1

#include<stdio.h>

void display(int iNo)
{
    for(int i=iNo ;i>=1 ;i--)
    {
        printf("%d\t ",i);
    }
    printf("\n");
}
int main()
{
    
    int iValue=0;


    printf("Enter number : ");
    scanf("%d",&iValue);

    display(iValue);

    return 0;
}


