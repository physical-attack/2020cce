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

