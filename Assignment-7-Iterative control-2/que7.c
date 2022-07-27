#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers between which you want to print prime numbers\n");
    scanf("%d %d",&a,&b);
    int i;
    while(a<=b)
    {
        for( i=2;i<=a-1;i++)
        {
          if(a%i==0)
          {
            break;
          }
        }
        if(i==a)
        printf("%d ",a);
        a++;
    }
    return 0;
}