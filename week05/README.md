5-0
```c
#include <stdio.h>
char line[20]="232322121232122133";
int main()
{
    char *p=line;
    //scanf("%s",line);
    for(int i=0;line[i]!=0;i++)
    {
        p=&line[i];
        char c=line[i];
        if(c!='2')printf("%c",c);
    }
    printf("\n");
}
```
5-1
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);
}
```
5-2
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority這是好的,沒問題,要多長有多長";
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line3);

    printf("你相信嗎? 這是 line4:==%s==\n",line4);
}
```
5-3
```c
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        printf("%s\n",line[i]);
    }
}
```
5-4
```c
#include <stdio.h>
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
