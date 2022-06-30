// Program to simulate a simple calculator
# include <stdio.h>
int main()
{
	// Variable declaration
	int num1,num2,result;
	char op;
	// Display the message
	printf("Enter an arthemtic operator:\n");
	// Read the input
	scanf("%c",&op);
	// Display the message
	printf(" Enter two numbers:\n");
	//Read the input
	scanf("%d%d",&num1,&num2);
	if(op=='+')
	{
		result=num1+num2;
	}
	else if(op == '-')
	{
		result=num1-num2;
	}
	else if(op == '*')
	{
		result=num1*num2;
	}
	else if(op == '/')
	{
		if(num2 == 0)
		{
			printf("Divide by zero error\n");
			return 1;
		}
		else
		{
		result=num1/num2;
		}
	}
	else if(op == '%')
	{
		if(num2 == 0)
		{
			printf("Divide by zero error\n");
			return 2;
		}
		else
		{
		result=num1%num2;
		}
	}
	else
	{
		printf("invalid operator\n");
		return 3;
	}
	printf("%d %c %d = %d\n",num1,op,num2,result);
	return 0;
}
	
