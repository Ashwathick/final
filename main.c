#include<stdio.h>
#include"string.h"

int main()
{
	char s1[100],s2[100];

	printf("enter first string:");
	scanf("%s",s1);
	printf("enter the second string:");
	scanf("%s",s2);

	printf("\n Comparing:%d",compare(s1,s2));
	cat(s1,s2);
	printf("\nConcatenating:%s",s1);
	printf("\nReverse:%s",rev(s1));
	printf("\nCopied:%s",copy(s1));
	printf("\nLength:%d",length(s1));

	return 0;
}

