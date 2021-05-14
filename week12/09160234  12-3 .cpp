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
