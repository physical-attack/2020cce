12-1
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int A[256]={};
		char ascii[256];
		for(int i=0;i<256;i++)
		{
			ascii[i]=i;
		}
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			A[c]++;
		}
		for(int i=0;i<256;i++)
		{
			for(int j=i+1;j<256;j++)
			{
				if(A[i]>A[j])
				{
					int t=A[i];
					A[i]=A[j];
					A[j]=t;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++)
		{
			if(A[i]>0) printf("%d %d\n",ascii[i],A[i]);
		}
	}
}
```
![](https://i.imgur.com/xeaKdsw.png)
12-2
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int A[256]={};
		char ascii[256];
		for(int i=0;i<256;i++)
		{
			ascii[i]=i;
		}
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			A[c]++;
		}
		for(int i=0;i<256;i++)
		{
			for(int j=i+1;j<256;j++)
			{
				if(A[i]>A[j])
				{
					int t=A[i];
					A[i]=A[j];
					A[j]=t;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
				if(A[i]==A[j]&&ascii[i]<ascii[j])
				{
					int t=A[i];
					A[i]=A[j];
					A[j]=t;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++)
		{
			if(A[i]>0) printf("%d %d\n",ascii[i],A[i]);
		}
	}
}
```
![](https://i.imgur.com/WBoQQJv.png)
12-3
```c
#include <stdio.h>
int b[100];
int main()
{
	int a;
	scanf("%d",&a);
	for(int t=0;t<a;t++)
	{
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&b[i]);
		}
		int A=0;
		printf("Optimal train swapping takes %d swaps.\n",A);
	}
}
```
![](https://i.imgur.com/UGjBQRF.png)
12-4
```c
#include <stdio.h>
int b[100];
int main()
{
	int a;
	scanf("%d",&a);
	for(int t=0;t<a;t++)
	{
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&b[i]);
		}
		int A=0;
		for(int k=0;k<N-1;k++)
		{
			for(int i=0;i<N-1;i++)
			{
				if(b[i]>b[i+1])
				{
					int t=b[i];
					b[i]=b[i+1];
					b[i+1]=t;
					A++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",A);
	}
}
```
![](https://i.imgur.com/XKKT5uZ.png)
12-5
```c
#include <stdio.h>
int a[10000];
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)==2)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("%d %d\n",n,m);
		for(int i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
```
![](https://i.imgur.com/S9tXaIk.png)
12-6
```c
#include <stdio.h>
int a[10000];
void swap(int i,int j)
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)==2)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]%m>a[j]%m) swap(i,j);
				if(a[i]%m==a[j]%m&&a[i]%2==0&&a[j]%2!=0) swap(i,j);
				if(a[i]%m==a[j]%m&&a[i]%2!=0&&a[j]%2!=0&&a[i]<a[j]) swap(i,j);
				if(a[i]%m==a[j]%m&&a[i]%2==0&&a[j]%2==0&&a[i]>a[j]) swap(i,j);
			}
		}
		printf("%d %d\n",n,m);
		for(int i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
```
![](https://i.imgur.com/NXfdnOO.png)