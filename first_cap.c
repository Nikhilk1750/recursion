#include<stdio.h>
#include<string.h>
static int i,j;
char first_cap(char *str)
{
	char str1;
	if(j<i)
	{
	  if((str[j]>=65)&&(str[j]<=92))
	  {
	  	str1=str[j];
	  	return str1;
		  }	
		  j++;
		  return first_cap(str);
	}
	return 0;
}
int main()
{
	char str[50],s;
	printf("Enter the string:");
	fgets(str,50,stdin);
	if(str[strlen(str)-1]==0)
	str[strlen(str)-1]=0;
	i=strlen(str);
	s=first_cap(str);
	if(s!=0)
	printf("First cap letter '%c' in %s\n",s,str);
	else
	printf("No cap letters in given string");
}
