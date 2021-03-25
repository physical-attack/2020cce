#include <stdio.h>
struct data
{
    float x,y,z;
}a,b;
struct data c,d;
int main()
{
    struct data e;
    struct data f={1,2,3};

    printf("%f %f %f\n",a.x,a.y,a.z);
    printf("%f %f %f\n",b.x,b.y,b.z);
    printf("%f %f %f\n",c.x,c.y,c.z);
    printf("%f %f %f\n",d.x,d.y,d.z);
    printf("%f %f %f\n",e.x,e.y,e.z);
    printf("%f %f %f\n",f.x,f.y,f.z);
}

