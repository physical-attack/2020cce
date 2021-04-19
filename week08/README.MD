8-1
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++)
	{
		int N=0;
		for(int i=0;    ;i++)
		{
			gets(tree[i]);
			if(strcmp(tree[i],"")==0)
			{
				N=i;
				break;
			}
		}
		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);
		}
	}
}
```
![](https://i.imgur.com/NiUKyQ0.png)

8-2
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++)
	{
		int N=0;
		for(int i=0;    ;i++)
		{
			gets(tree[i]);
			if(strcmp(tree[i],"")==0)
			{
				N=i;
				break;
			}
		}
		qsort(tree,N,32,compare);
		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);
		}
	}
}
```
![](https://i.imgur.com/GQvDwsq.png)

8-3
```c
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
```
![](https://i.imgur.com/cbEIq9S.png)

8-4
```c
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
```
![](https://i.imgur.com/6wSK0Lh.png)

8-5
```c
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
```
![](https://i.imgur.com/HvM5bKo.png)

8-6
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++)
	{
		int N=0;
		for(int i=0;    ;i++)
		{
			gets(tree[i]);
			if(strcmp(tree[i],"")==0)
			{
				N=i;
				break;
			}
		}
		qsort(tree,N,32,compare);
		int A=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++)
		{
			if(strcmp(tree[i],tree[i+1])!=0)
			{
				printf("%.4f\n",100*A/(float)N);
				printf("%s ",tree[i+1]);
				A=1;
			}
			else
			{
				A++;
			}
		}
		printf("%.4f\n",100*A/(float)N);
	}
}
```
![](https://i.imgur.com/228cph0.png)
