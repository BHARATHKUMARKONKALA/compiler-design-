#include<stdio.h>
int main()
{
	char s[10];
	printf("Enter a operator :");
	scanf("%s",&s);
	if(s[0]=='+')
	printf("Addition");
	else if(s[0]=='-')
	printf("Subtraction");
	else if(s[0]=='*')
	printf("Multiplication");
	else if(s[0]=='/')
	printf("Division");
	else if(s[0]=='>' && s[1]=='>')
	printf("Bitwise Right Shift");
	else if(s[0]=='<' && s[1]=='<')
	printf("Bitwise Left Shift");
	else if(s[0]=='>' && s[1]=='=')
	printf("Greater than or Equal to");
	else if(s[0]=='<' && s[1]=='=')
	printf("Less than or Equal to");
	else if(s[0]=='=' && s[1]=='=')
	printf("Equal to");
	else if(s[0]=='=')
	printf("Assigning operator");
	else if(s[0]=='>')
	printf("Greater than");
	else if(s[0]=='<')
	printf("Less than");
	else if(s[0]=='|' && s[1]=='|')
	printf("Logical OR");
	else if(s[0]=='&' && s[1]=='&')
	printf("Logical AND");
	else if(s[0]=='&')
	printf("Bitwise AND");	
	else if(s[0]=='!' && s[1]=='=')
	printf("NOT EQUAL");
	else if(s[0]=='|')
	printf("Bitwise OR");
	else if(s[0]=='^')
	printf("Bitwise XOR");
	else if(s[0]=='~')
	printf("Bitwise Complement");
	else
	{
		printf("Invalid operator");
	}
}
Footer
© 2023 GitHub, Inc.
Footer navigation
