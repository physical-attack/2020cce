#include <stdio.h>
#include <string.h>//qsort()
#include <stdlib.h>//strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            �ন�u�r�ꪺ���Сv
    char *s1=(char*)p1;
    char *s2=(char*)p2;
    if(strcmp(s1,s2)>0) return 1;
    if(strcmp(s1,s2)==0) return 0;
    if(strcmp(s1,s2)<0) return -1;
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//�}�Y
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//����
			printf("%s ", name[i+1] );//�s���}�Y
			ans=1;
		}
	}
	printf("%d\n", ans );//����
}
