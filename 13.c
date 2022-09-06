#include <stdio.h>
int swap(int *a , int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

 
int main(){
    int x,y;
    x=45;
    y=56;
    printf("\nThe numbers before the swapping are :\nx= %d, y= %d\n",x,y);
    swap(&x,&y);
    printf("\nThe numbers before the swapping are :\nx= %d, y= %d\n",x,y);
    
return 0;
}