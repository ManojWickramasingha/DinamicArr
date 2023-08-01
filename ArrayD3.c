/*Autor - manoj wickrmasingha
 Date - 2023.7.31
 title - dynamic memory aloccation array using struct arr function in c
 */
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
 int len;
 int arr[];   
} flex;

int main()
{
flex *flex1,*flex2;

flex1 = (flex*)malloc(sizeof(flex*) + 5 * sizeof(int));
flex2 = (flex*)malloc(sizeof(flex*) + 10 * sizeof(int));

if(flex1 == NULL){
    printf("does not memory allocated!");
}
else{
    printf("memory allocated sucessfully----");
//flex1 enter element---------
for(int i=0;i<5;i++)
{
    flex1 -> arr[i] = i+1;
}

//flex2 enter element-------
for(int i=0;i<10;i++)
{
    flex2 -> arr[i] = i+1;
}

//printf flex1 pointer array---
for(int i=0;i<5;i++)
{
    printf("%d ", flex1->arr[i]);
}
printf("\n");
//print the flex2 pointer array---
for(int i=0;i<10;i++)
{
    printf("%d ", flex2->arr[i]);
}

}
return 0;
}

