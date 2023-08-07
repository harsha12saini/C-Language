#include <stdio.h>
int main()
{
    int a,b;                      //declaration
    printf("enter two numbers");           
    scanf("%d%d",&a,&b);            
    
    printf("difference = %d\n",a-b);
    printf("product = %d\n",a*b);
    printf("quotient = %d\n",a/b);
    printf("remainder = %d",a%b);
    
}
