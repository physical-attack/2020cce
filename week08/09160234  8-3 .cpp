#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
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
		scanf("%s",line[i]);
	}
	qsort(line,a,10,compare);
	for(int i=0;i<a;i++)
	{
		printf("%s\n",line[i]);
	}
}
