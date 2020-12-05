#include<stdio.h>
int square(int n);
int main()
{
    double i=3.0;
    printf("square:%d\n",square(i)); //error
}
int square(int n)
{
    return n*n;
}