//WAP to check whether a given String is palindrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,temp=0;
	char str[50];
	printf("Enter the name:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			temp=1;
			break;
		}
	}
	if(temp==0)
	printf(" %s: is a palindrome:",str);
	else
	printf(" %s:  is not a palindrome:",str);
}
