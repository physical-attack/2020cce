#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;

    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
int main()
{
    int n=4;

    qsort( line, n, sizeof(char[10]), compare);

    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}
