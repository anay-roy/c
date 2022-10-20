#include<stdio.h>
#include<string.h>
#include<ctype.h>


char stack[100];
int top = -1;
void push(char x)
{
	stack[++top] = x;
}
char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}
int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if(x == '^')
    	return 3;
    return 0;
}

int main()
{
	char exp[100];
    char prefix[100];
	char *e, x;
	printf("Enter the expression : ");
	scanf("%s", exp);

	int i, len, temp;  
    len = strlen(exp); 
      
    for (i = 0; i < len/2; i++)  
    {  
        temp = exp[i];  
        exp[i] = exp[len - i - 1];  
        exp[len - i - 1] = temp;  
    }  


    e = strrev(exp); 

    while(*e != '\0')
    {

    }
}
