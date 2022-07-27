#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    for(i=2;i<=b;i++)
    {
        if(a%i==0 || b%i==0)
        {
          break;
        }
    }
    if(i>b)
    printf("%d and %d are co-prime numbers",a,b);
    else
    printf("%d and %d are not co-prime numbers",a,b);
    return 0;
}