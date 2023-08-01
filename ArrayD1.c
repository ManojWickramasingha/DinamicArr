/*Autor - manoj wickrmasingha
 Date - 2023.7.31
 title - dynamic memory aloccation array using calloc function in c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    // dclear the size of array variable and array pointer--

    int size;
    int *p;

    //Enter user input the array size--
    printf("Enter array size\n");
    scanf("%d",&size);

    p = (float *)calloc(10,sizeof(float));
//import point before derefrrence null pointer code crash--
    if(p == NULL)
    {
        printf("memory does not allocated null pointer\n");
    }
    else{
        printf("memory successfully allocated using calloc \n");

        //intiliaze value--
        for(int i=0;i<size;i++)
        {
            p[i] = i+1;
        }

        //print array element--

        for(int i=0; i <size;i++)
        {
            printf("%d, ",p[i]);
        }
    }

    return 0;
}