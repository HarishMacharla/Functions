#include<stdio.h>
#define LEN 11

int sum(int a[],int n)
{
    int add=0,i;

    for(int i=0;i<n;i++){
        add=add+a[i];
    }
    return add;
}
int main()
{
    int b[LEN];
    for(int x=0;x<LEN;x++){
        printf("enter num %d:",x);
        scanf("%d",&b[x]);
    }
    printf("sum total of the array:%d\n",sum(b,LEN));   //sum(b,10) only gives sum up to len 10 & ignore 11                                                    //11.
    printf("\n\n");
}