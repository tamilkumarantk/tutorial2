#include <stdio.h>  //this header file used for usage of printf and scanf in my code.
#include <stdlib.h>
int main()
{
    int a[3][3],i,j;   //declaration of variables
    int str[10],k=0;
    printf("Enter elements for 3 * 3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);   //getting input from user
            str[k]=a[i][j];
            k++;

        }
    }
    printf("Matrix Elements are\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);     //display the matrix elements
        }
        printf("\n");
    }
    printf("Duplicate Array Elements are\n");
        for(int i=0;i<9; i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(str[i] == str[j])           //finding the duplicate element from the matrix by comparing
            {
                printf("%d ", str[j]);   //getting output
            }
        }
    }
    return 0;
}


/*
from this code we are going to find the duplicate element from the matrix
*/ 
   


