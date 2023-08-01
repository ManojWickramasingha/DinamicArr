/*Autor - manoj wickrmasingha
 Date - 2023.7.31
 title - dynamic memory aloccation array using array 2D pointer function in c
 */
#include<stdio.h>
#include<stdlib.h>

int main() 
{
    //declare pointer array 2D
    int row,column;
    int *p;

    printf("Enter column and row in this array\n");
    scanf("%d %d", &row,&column);

    p = (int *)malloc((row * column) * sizeof(int));

    //putting the get element cosidered suppose 1D array---
    for(int i=0;i<(row * column); i++)
    {
        p[i] = i+1;
    }

    //acessing suppose 2D array----

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ", p[i * column + j]) ;
        }
        printf("\n");
    }

    free(p);

    return 0;


    
}