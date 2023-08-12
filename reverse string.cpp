#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("\n enter a string to be reversed:");
	scanf("%s",str);
	printf("\n after the reverse of a string:%s",strrev(str));
	return 0;
}
