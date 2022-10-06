// WAP to print fibanocci series using recursion.

#include<stdio.h>
int fib(int x,int y,int num)
{
	if(num>x)
	{
		printf("%d ",x);
		return fib(y,x+y,num);
	}
}
int main()
{
	int num;
	printf("Enter the num value:");
	scanf("%d",&num);
	fib(0,1,num);
}
