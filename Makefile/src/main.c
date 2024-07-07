#include "stdio.h"
#include "../include/calc.h"

int main ()
{
	int num1,num2;
	char opration;
	printf("enter operation :");
	scanf("%c",&opration);
	printf("enter num1 :");
	scanf("%d",&num1);

	printf("enter num2 :");
	scanf("%d",&num2);
	switch (opration){
		case '+':add(num1,num2);break;
		case '-':sub(num1,num2);break;
		case '*':mul(num1,num2);break;
		case '/':dev(num1,num2);break;
		default :printf("wrong symbol");
	}
	return 0;
}
