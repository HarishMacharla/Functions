#include<stdio.h>
double average(double a,double b)
{   
    double mean;
    mean=(a+b)/2.0;
    return mean;
}
int main()
{
    double x,y,z;
    printf("enter x y z:");
    scanf("%lf %lf %lf",&x,&y,&z);

    printf("average of %.2lf and %.2lf : %.2lf\n",x,y,average(x,y));
    printf("average of %.2lf and %.2lf : %.2lf\n",y,z,average(y,z));
    printf("average of %.2lf and %.2lf : %.2lf\n",x,z,average(x,z));

    return 0;
}
    
