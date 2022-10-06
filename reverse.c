// WAP to reverse a string using recursion.
#include<stdio.h>
#include<string.h>
static int i,j;
char *strev(char *str1,char *str2)
{
	if(i>0)
	{
		str2[j]=str1[i-1];
		i--;j++;
		return strev(str1,str2);
	}
	else
	str2[j]=0;
	return str2;
}
int main()
{
	char str[50],str1[50];
	printf("Enter the string:");
	fgets(str,50,stdin);
	if(str[strlen(str)-1]==0)
	str[strlen(str)-1]=0;
	i=strlen(str);
	printf("After reversing a string: %s",strev(str,str1));
}
