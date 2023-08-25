#include<stdio.h>
void cat(char *s1,char *s2)
{
	char *p1,*p2;
	int i=0,j=0;

	p1=s1;
	p2=s2;
	while(*(p1+i)!='\0')
	i++;
	while(*(p2+j)!='\0')
	{
		*(p1+i)=*(p2+j);
		j++;
		i++;
	}
	*(p1+i)='\0';
}

char *rev(char *s)
{
	char r[100];
	char *p=r;
	int i=0,j=0;

	while(*(s+i)!='\0')
	{
		i++;
	}
	while(i!=0)
	{
		i--;
		*(p+j)=*(s+i);
		j++;
	}
	*(p+j)='\0';

	return p;
}

int leng(char *p)
{
	int count=0;

	while(*p!='\0')
	{
		count++;
		p++;
	}
	
	return count;
}
int length(char *s)
{
	int len;

	len=leng(s);

	return len;
}

char compare(char *s1,char *s2)
{
	char *p1,*p2;
	int i=0,j=0;

	p1=s1;
	p2=s2;

	while(*(p1+i)!='\0')
	{
		i++;
	}
	while(*(p2+j)!='\0')
	{
		j++;
	}
	if(i>j)
	{
		return i-j;
	}
	else if(i<j)
		return i-j;
	else
		return 0;
}


char *copy(char *s)
{
	char s2[100],*p1,*p2;
	int i;

	p1=s;
	p2=s2;
	for(i=0;*(p1+i)!='\0';i++)
	{
		*(p2+i)=*(p1+i);
	}
	*(p2+i)='\0';

	return p2;
}

