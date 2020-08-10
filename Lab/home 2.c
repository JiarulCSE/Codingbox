#include<stdio.h>
int main()
{
    int i=1,j;
    for (i=1;i<=5;i++)
    {
        j=1;
        for (j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
