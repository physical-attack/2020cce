11-1
```c
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}
```
![](https://i.imgur.com/qI9Mgau.png)
11-2
```c
#include <stdio.h>
typedef struct data
{
    char c;
    int A;
}DATA;
DATA listA;
int main()
{
    listA.c='A';
    listA.A=1;
    printf("%c %d",listA.c,listA.A);
}
```
![](https://i.imgur.com/QTaSsNa.png)
11-3
```c
#include <stdio.h>
#include <stdlib.h>
int compare (const void*p1,const void*p2)
{
    int d1=*((int*)p1);
    int d2=*((int*)p2);
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]={5,8,9,6,4,2,3,1,7,10};
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
```
![](https://i.imgur.com/c6J4WqQ.png)
11-4
```c
#include <stdio.h>
#include <string.h>//qsort()
#include <stdlib.h>//strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            轉成「字串的指標」
    char *s1=(char*)p1;
    char *s2=(char*)p2;
    if(strcmp(s1,s2)>0) return 1;
    if(strcmp(s1,s2)==0) return 0;
    if(strcmp(s1,s2)<0) return -1;
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//開頭
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//結尾
			printf("%s ", name[i+1] );//新的開頭
			ans=1;
		}
	}
	printf("%d\n", ans );//結尾
}
```
![](https://i.imgur.com/EE7SxK5.png)
11-5
```c
#include <stdio.h>
char line[2000];
int A[256];
int main()
{
	for(int t=0;gets(line)!=NULL;t++)
	{
		if(t>0) printf("\n");
		printf("blahblah\n");
		printf("blahblah\n");
		printf("blahblah\n");
	}
}
```
![](https://i.imgur.com/r2Nw9KP.png)