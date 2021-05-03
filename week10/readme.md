10-1
```c
#include <stdio.h>
char line[10000];
int main()
{
	int a;
	scanf("%d\n",&a);
	
	for(int i=0;i<a;i++)
	{
		gets(line);
		printf("%s\n",line);
	}
}
```
![](https://i.imgur.com/vSeCHdB.png)
10-2
```c
#include <stdio.h>
char line[10000];
int A[26];
int main()
{
	int a;
	scanf("%d\n",&a);
	
	for(int i=0;i<a;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A'&&c<='Z') printf("大");
			else if(c>='a'&&c<='z') printf("小");
			else printf("他");
		}
	}
}
```
![](https://i.imgur.com/Z4wKLOs.png)
10-3
```c
#include <stdio.h>
char line[10000];
int A[26];
int main()
{
	int a;
	scanf("%d\n",&a);
	
	for(int i=0;i<a;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A'&&c<='Z') A[c-'A']++;
			else if(c>='a'&&c<='z') A[c-'a']++;
		}
	}
	for(int i=0;i<26;i++)
	{
		printf("%c %d\n",'A'+i,A[i]);
	}
}
```
![](https://i.imgur.com/O4AgiGk.png)
10-4
```c
#include <stdio.h>
char line[10000];
int A[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int a;
	scanf("%d\n",&a);
	
	for(int i=0;i<a;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A'&&c<='Z') A[c-'A']++;
			else if(c>='a'&&c<='z') A[c-'a']++;
		}
	}
	for(int i=0;i<26;i++)
	{
		for(int j=i+1;j<26;j++)
		{
			if(A[i]<A[j]||(A[i]==A[j]&&alphabet[i]>alphabet[j]))
			{
				int t=A[i];
				A[i]=A[j];
				A[j]=t;
				char c=alphabet[i];
				alphabet[i]=alphabet[j];
				alphabet[j]=c;
			}
		}
	}
	for(int i=0;i<26;i++)
	{
		if(A[i]>0) printf("%c %d\n",alphabet[i],A[i]);
	}
}
```
![](https://i.imgur.com/Te59GOT.png)
10-5
```c
#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct
{
	int A;
	char c;
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2)
{
	if( ((BOX*)p1)->A > ((BOX*)p2)->A ) return -1;
	else if( ((BOX*)p1)->A < ((BOX*)p2)->A ) return +1;
	else if( ((BOX*)p1)->c < ((BOX*)p2)->c ) return -1;
	else if( ((BOX*)p1)->c > ((BOX*)p2)->c ) return +1;
	else return 0;
}
int main()
{
	for(int i=0;i<26;i++) array[i].c='A'+i;
	int a;
	scanf("%d\n",&a);
	for(int i=0;i<a;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A'&&c<='Z') array[c-'A'].A++;
			else if(c>='a'&&c<='z') array[c-'a'].A++;
		}
	}
	qsort(array,26,sizeof(BOX),compare);
	for(int i=0;i<26;i++)
	{
		if(array[i].A>0) printf("%c %d\n",array[i].c,array[i].A);
	}
}
```
![](https://i.imgur.com/3Cn1qKO.png)