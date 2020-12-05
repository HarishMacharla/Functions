#include <stdio.h>
#define LEN 2

int array(int a[][LEN], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < LEN; j++)
        {
            sum = sum + a[i][j];
        }
    return sum;
    }
}

int main()
{
    int y, b[][LEN];
    printf("enter no.of rows:");
    scanf("%d", &y);
    for (int x = 0; x < y; x++)
    {
        for (int z = 0; z < LEN; z++)
        {
            scanf("%d", &b[x][z]);
        }
    }
    printf("sum of rows and columns:%d",array(b, y));
}
    