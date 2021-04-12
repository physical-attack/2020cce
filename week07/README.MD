7-2
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%s",line[i]);
	}
	qsort(line,a,10,compare);
	for(int i=0;i<a;i++)
	{
		printf("%s\n",line[i]);
	}
}
```
![](https://i.imgur.com/Baapx9k.png)

7-3
```c
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
```
![](https://i.imgur.com/5NmtN3R.png)

7-5
```c
char *p1, *p2;
char line[4][10]={"jkl", "ghi", "def", "abc"};
char temp[10];
int main() {
  int n=4;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      p1=line[i]; p2=line[j];
      if( strcmp(line[i],line[j]) > 0 ){
        strcpy(temp, line[i]);
        strcpy(line[i], line[j]);
        strcpy(line[j], temp);
      }
    }
  }

  for(int i=0; i<n; i++){
    printf("%s\n", line[i]);
  }

  return 0;
}
```
![](https://i.imgur.com/ITa31Sm.png)
