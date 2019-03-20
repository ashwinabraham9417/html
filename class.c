#include<stdio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for (int x=n-1;x>0;x--)
    {
        for (int y=1;y<=x;y++)
        {
            printf("%d ",y);
        }
        printf("\n");

    }
}
