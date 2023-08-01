#include<stdio.h>
#include<stdlib.h>

/* author - manoj wickramasingha
 date - 2023.7.31
 title - Dianamic memory allocation */

 //declare size and pointer array--
int main(){
 int size;
 int *p;

// enter user input array size

printf("Enter array size");
scanf("%d",&size);

p = (int *)malloc(size *sizeof(int)) ;

//check pointer null pointer or not---
if(p == NULL){
    printf("memory does not allocate");
}
else{
    printf("memory sucessfully allocated");
//enter element in array----
    for(int i=0;i<size;i++)
    {
        p[i] = i+1;
    }

//printf array ---

for(int i=0;i<size;i++)
{
    printf("%d ",p[i]);
}
}

return 0;


}
