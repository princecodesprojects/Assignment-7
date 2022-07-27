#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("How many term of fibonnaci series you wnat\n");
    scanf("%d",&n);
    int a=-1,b=1,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    return 0;
}