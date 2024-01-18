#include <stdio.h>
#include <stdlib.h>
void main()
{
char op;
float a,b,c;
printf("Enter two numbers \n");
scanf("%f%f",&a,&b);
printf("Enter the operator :");
scanf(" %c",&op);
switch(op)
{
case '+' : c = a + b; /* compute addition */
printf("%f + %f = %f\n", a, b,c);
break;
case '-' : c = a - b; /* compute addition */
printf("%f - %f = %f\n", a, b,c);
break;
case '*' : c = a * b; /* compute addition */
printf("%f * %f = %f\n", a, b,c);
break;
case '/' : if(b!=0)
{
c = a / b; /* compute addition */
printf("%f / %f = %f\n", a, b,c);
}
else
{
printf("Expression is not valid\n");
}
break;
default : printf("Enter valid operator\n");
}
}
