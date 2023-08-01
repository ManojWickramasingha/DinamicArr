/*Autor - manoj wickrmasingha
 Date - 2023.7.31
 title - dynamic memory aloccation array using realloc function in c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare pointer and size varible--
    int size;
    int *p;

    //Enter user input --
    printf("Enter array size\n");
    scanf("%d", &size);

    p = (int *)calloc(10,sizeof(int));

    if(p == NULL){
        printf("Memory allocate not successfully!\n");
    }
    else{
        printf("Memory allocate successful calloc \n");

        //enetr value--
        for(int i=0;i<size;i++)
        {
            p[i] = i+1;
        }

        //print array---

        for(int i=0;i<size;i++)
        {
            printf("%d, ", p[i]);
        }
    }

    size =20;

    int *temp = p;
    p = (int *)realloc(p,size * sizeof(int));

    if(!p){
            printf("not re-allocate memory\n");
            p = temp;
    }
    else{
        printf("successfully reallocate\n");
//enter increse  element here-----
        for(int i=10;i<size; i++)
        {
            p[i] = i+1;
        }

//print incresing array----
        for(int i=0;i<size;i++)
        {
            printf("%d, ", p[i]);
        }
    }

    return 0;
}