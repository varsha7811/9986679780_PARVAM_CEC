#include<stdio.h>
/*1 4 7 12 23....N
*/
int main()
{
    int f1=1,f2=4,f3=7,n=0;
    scanf("%d",&n);
    while(f1<=n)
    {
        int f4=f1+f2+f3;
        printf("%d ",f1);
        f1=f2;
        f2=f3;
        f3=f4;
    }
    return 0;
}
