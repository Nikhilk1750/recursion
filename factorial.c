// WAP to print factorial of a number using recursion?

#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return(n*fact(n-1));
}
int main()
{
	int num;
	printf("Enter the num value:");
	scanf("%d",&num);
	printf("%d",fact(num));
}
