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
