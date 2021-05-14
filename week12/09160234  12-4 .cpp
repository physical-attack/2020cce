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
