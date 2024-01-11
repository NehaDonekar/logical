//input : 6
//output :1 #2# 3 #4 #5# 6

#include<stdio.h>

void display(int iNo)
{
    for(i=1 ;i<=iNo;i++)
    {
        printf("%d\t#\t",i);
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


