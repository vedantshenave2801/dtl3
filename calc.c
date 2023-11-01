#include<stdio.h>
int main()
{
    float a,b,x;
    char op;
    printf("enter operator:\n");
    scanf("%c",&op);
    printf("enter two numbers:\n");
    scanf("%f %f",&a,&b);
    switch(op)
    {
        case '+':
            {   x=a+b;
                printf("sum is:%f",x);
            }
        case '-':
            {   x=a-b;
                printf("diff is:%f",x);
            }
        case '*':
            {   x=a*b;
                printf("mult is:%f",x);
            }
        case '/':
            {   x=a/b;
                printf("div is:%f",x);
            }
        case '$':
            {
                int decimalNumber;
                printf("Enter a decimal number: ");
                scanf("%d", &decimalNumber);
    
                printf("Hexadecimal representation: 0x%X\n", decimalNumber);
            }
    }
        return 0;
}