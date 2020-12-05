#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
    {
        return b;
    }
}
float Average(int a,int b)
{
    float mean;
    mean=(a+b)/2.0;
    return mean;    //return a+b/2.0;
}
int main()
{   
    int a,b;

    // printf("\nenter two numbers:");
    // scanf("%d %d",&a,&b);

    printf("\nthe average of two numbers:%.2f\n",Average(5,6));
    printf("the max of two numbers:%d\n\n",max(5,6));


    return 0;
}

