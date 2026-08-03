//program on postfix evolution
#include<stdio.h>
#include<ctype.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value)
{
	if(top==MAX-1)
	{
		printf("stack overflow\n");
		return;
	}
	stack[++top]=value;
}
int pop()
{
	if(top==-1)
	{
		printf("stack underflow\n");
		return -1;
	}
	return stack[top--];
}
int main()
{
	char postfix[100];
	int i,op1,op2,result;
	printf("Enter postfix expression(single digit operands only): ");
	scanf("%s",postfix);
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isdigit(postfix[i]))
		{
			push(postfix[i]-'0');
		}
		else
		{
			op2=pop();
			op1=pop();
			switch(postfix[i])
			{
				case '+':
					result=op1+op2;
					break;
			    case '-':
			    	result=op1-op2;
			    	break;
			    case '*':
				    result=op1*op2;
					break;
				case '/':
				    result=op1/op2;
					break;
				case '%':
				    result=op1%op2;
					break;
				default:
					printf("Invalid operation\n");
					return 0;
								
			}
			push(result);
		}
	}
	printf("Result of postfix evolution=%d\n",pop());
}
