#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
char others[80];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%s",name[i]);
		gets(others);
	}
	qsort(name,a,80,compare);
	int A=1;
	printf("%s ",name[0]);
	for(int i=0;i<a-1;i++)
	{
		if(strcmp(name[i],name[i+1])!=0)
		{
			printf("%d\n",A);
			printf("%s ",name[i+1]);
			A=1;
		}
		else
		{
			A++;
		}
	}
	printf("%d\n",A);
}
