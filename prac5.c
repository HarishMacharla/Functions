#include<stdio.h>
float average(int a,int b)
{
    float mean;
    mean=(a+b)/2.0;
    return mean;
}
int main()
{   
    int x,y;
    printf("enter x,y:\n");
    scanf("%d %d",&x,&y);

    if(average(x,y)>0)
        printf("++++\n\n");
    else
        printf("----\n");
    printf("average of two numbers %d and %d  :  %.2f\n\n",x,y,average(x,y));
}
