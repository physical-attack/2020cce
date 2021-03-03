# 2020cce

進階題1：分式化簡
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int d=a,e=b;
	if(a<b)
	{
		int t=a;
		a=b;
		b=t;
	}
	int c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("%d %d\n",d/b,e/b);
}
```
進階題2：讀入整數反序列印
```C
#include <stdio.h>
int main()
{
	int a[20],b=0;
	for(int i=1;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		b++;
	}
	for(int i=b;i>0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
進階題3：A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int A=1;
	for(int i=1;i<=b;i++)
	{
		A*=a;
	}
	return A;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
進階題4：漸增數列相加
```C
#include <stdio.h>
int main()
{
	int a,b,A=0;
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		b=i*(i+1);
		A+=b;
	}
	printf("%d\n",A);
}
```
基礎題1：找零錢
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a/50;
	int c=a%50/5;
	int d=a%50%5;
	printf("%d=50*%d+5*%d+1*%d\n",a,b,c,d);
}
```
基礎題2：因數個數
```C
#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0) b++;
	}
	printf("%d\n",b);
}
```
基礎題3：找倍數
```C
#include <stdio.h>
int main()
{
	int a[10],b=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		{
			b++;
		}
	}
	printf("%d\n",b);
}
```
基礎題4：整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int a[10],b=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		{
			b++;
		}
	}
	printf("%d\n",b);
}
```
