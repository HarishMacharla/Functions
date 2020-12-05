// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("enter number:");
//     scanf("%d",&n);
//     for(i=2;i<=n;i++)
//     {
//         if(n%i==0)
//             break;
//     }
//     if(i<n)
//         printf("%d is not a prime\n",n);
//     else
//         printf("%d is prime\n",n);
    
// }

#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n)
{
    int i;
    if(n<=1)
        return false;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int x=5;  //arguments
    // printf("\nenter number:");
    //scanf("%d",&x);

    if(is_prime(x))
        printf(" %d is prime\n\n",x);
    else
        printf("%d is not prime\n\n",x);

    return 0;
}

