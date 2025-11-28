#include<stdio.h>
int main() 
{
    int a[10][10],r,c,i,j;
    printf("enter row&column sizes");
    scanf("%d%d",&r,&c);
    printf("enter A matrix value");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("transpose motion is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
