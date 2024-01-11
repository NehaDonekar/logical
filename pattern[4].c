//input : 4
//output : a b c d

#include<stdio.h>

void display(int iNo)
{
    int i = 0;
    char ch= '\0';

    for( i = 1 , ch ='a' ; i<=iNo ; i++ , ch++)
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


