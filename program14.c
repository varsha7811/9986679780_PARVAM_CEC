/*c program to generate numerical patterns
*/
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {  
     for(int j=0;j<n;j++)
      {
        printf("%d ",j+1);
      }
        printf("\n");
    }
    return 0;
}