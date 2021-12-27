#include<stdio.h>


int main(){

    int *p1 , *p2 , i ,j;

    printf("Enter the nuber i: ");
    scanf("%d",&i);
    printf("Enter the nuber j: ");
    scanf("%d",&j);

    p1 = &i;
    printf("Address Of the nuber: %d\n",p1);
    printf("Address Of the nuber: %d\n",&i);

    p2 = &j;
    printf("Address Of the nuber: %d",p2);


}