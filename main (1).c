#include<stdio.h> //this header file used for usage of printf and scanf in my code.
int main()
{
    int i,j,m,n,k,column_sum=0;  // the character i and j are used for looping intialization and condition,m and n are used for number of rows and columns in matrix and column_sum=0 is used for colunm addition.
    int arr[10][10];            // arr[10][10] is matrix with its maximum limit.
    printf("enter the number of row and columns:");  //here i provide a message to user to print these words berfore scanf function.
    scanf("%d %d",&m,&n);                            //get input for rows and colunms by m and n.
    printf("enter the column number:");              //here i provide a message to user to print these words for which column to print.
    scanf("%d",&k);                                  //get input for column by k.
    printf("enter the matrix elements:");    
    for(i=1;i<=m;i++)  //i gets incremented only when the inner loop is completed.
    {
       for(j=1;j<=n;j++)  //j gets increment when execution of its block of statement.
       {
         scanf("%d",&a[i][j]);   //Get values for matrix from i and j by array of a[ith row][jth column].
         if(i<=m && j==k)        //this if condition used for addition of particular column .
         column_sum=column_sum+a[i][j]; //above satisfied condition array taking addition here.
        }
    }
    printf("The sum of column %d is %d",k,column_sum);  //by this line i provides a message for the sum of which column and sum is printed here. 
}


/*
report:
    from this code we are going to learn how to sum the particular column
*/



