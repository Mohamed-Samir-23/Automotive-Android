#include "stdio.h"
#include "../include/calc.h"

void add (int num1,int num2)
{
	printf("%d + %d =%d\n",num1,num2,num1+num2);
}

void sub (int num1,int num2)
{
	printf("%d - %d =%d\n",num1,num2,num1-num2);
}

void mul (int num1,int num2)
{
	printf("%d * %d =%d\n",num1,num2,num1*num2);
}

void dev (int num1,int num2)
{
	printf("%d / %d =%d\n",num1,num2,num1/num2);
}
