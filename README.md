3-1
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
	int *p= & a[2];
	*p=222;

	p=p+2;
	*p=666;
}
```
![](https://i.imgur.com/h42w95P.png)

3-2
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
	for(int i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int *p= & a[2];
	*p=222;
	printAll();

	p=p+2;
	*p=666;
	printAll();

	p--;
	*p=555;
	printAll();
}
```
![](https://i.imgur.com/78mMwsK.png)

3-3
```c
#include <stdio.h>
int a[10]={0,10,20,30,40.50.60.70.80.90};
void printAll()
{
	for(int i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
int main()
{
	int *p= & a[2];
	*p=200;
	printAll();

	int *p2=p+4;
	*p=666;
	printAll();

	p2--;
	*p2=555;
	printAll();

	return 0;
}
```
![](https://i.imgur.com/iMx1pVg.png)

3-4
```c
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
	int b[10];

	int *p=(int*)malloc(sizeof(int)*10);

	return 0;
}
```
![](https://i.imgur.com/2PruwtF.png)
[](https://)