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
	for(int i=0;i<a;i++)
	{
		printf("%s\n",name[i]);
	}
}
