/*Autor - manoj wickrmasingha
 Date - 2023.7.31
 title - dynamic memory aloccation array using array with double pointer  function in c
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare --
    int **p1;
    int  *p;
    int r=2,c=3,count;

    p1 = (int**)malloc(r * sizeof(int *));
    for(int i=0;i<r;i++)
    p = (int *)malloc(c * sizeof(int));

    count =0;
//getting element-------
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            p1[i][j] = ++count;
        }
    }
//printting element array----
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        printf("%d ", p1[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    free(p1[i]);

    free(p1);


}