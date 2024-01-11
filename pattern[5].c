//input : 4
//output : A B C D

#include<stdio.h>

void display(int iNo)
{
    int i = 0;
    char ch= '\0';

    for( i = 1 , ch ='A' ; i<=iNo ; i++ , ch++)
    {
        printf("%c\t ",ch);
        //ch++;
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


