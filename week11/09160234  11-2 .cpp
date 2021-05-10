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
