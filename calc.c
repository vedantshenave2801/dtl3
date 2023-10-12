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
    }
        return 0;
}