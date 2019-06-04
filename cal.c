#include<stdio.h>
int main()	{
	// This is simple calculator
	char fun;
	double num1=0;
	double num2=0;
	double f=0.0;
	printf("___________________Calculator__________________\n\n");
	 printf("Enter your function (+, -, *, /): ");
        scanf("%c",&fun);
	printf("Enter number 01:");
	scanf("%lf",&num1);
	printf("Enter number 02:");
	scanf("%lf",&num2);
	switch(fun){
		case '+': f=num1+num2;
		break;
		case '-': f=num1-num2;
		break;
		case '*': f=num1*num2;
		break;
		case '/': f=num1/num2;
		break;
}
printf("%.2lf\n",f);
return 0;
}
