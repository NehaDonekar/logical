/*
    * * * * 
    * * * * 
    * * * * 
*/
#include<stdio.h>
void Display(int iNo1,int iNo2)
{
    int i =0 , j=0;
    for(int i=1 ; i<=iNo1 ; i++)
    {
        for(j=1; j<=iNo2 ;j ++)
        {
            printf("*\t");
        }
    printf("\n\n");    
    }


}
int main()
{
    int iNo1=0 ,iNo2=0;
    printf("Enter the number of rows : ");
    scanf("%d",&iNo1);

    printf("Enter the number of columns : ");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}

