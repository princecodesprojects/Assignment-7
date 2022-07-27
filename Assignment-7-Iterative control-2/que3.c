#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter any number which you wnat\n");
    scanf("%d",&n);
    int a=-1,b=1,sum=0;
    for(i=1;i<=20;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(sum==n)
        {
            printf("%d is a term of fibonacci series",n);
            break;
        }
        
    }
    if(i==21)
    printf("%d is not a term of fibonnaci series",n);
    return 0;
}