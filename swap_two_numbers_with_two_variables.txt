#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("original value of a = %d and b = %d" , a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nswapped value of a = %d and b = %d" , a,b);

}