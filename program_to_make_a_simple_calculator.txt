#include<stdio.h>
int main()
{
    int a,b;
    char o;
   
    printf("press - \n+ for addition\n- for subtraction\n* for multiplication\n/ for division\n");
    printf("enter choice=");
    scanf("%c", &o);
     printf("enter two nos = ");
    scanf("%d %d", &a, &b);
    switch(o)
    {
        case '+':printf("Addition = %d", a+b);
        break;
        case '-': printf("Subtraction = %d", a-b);
        break;
        case '*': printf("Multiplication = %d", a*b);
        break;
        case '/': printf("Division = %d", a/b);
        break;
        default: printf("Input choice is wrong");
        
    }
    return 0;
}
