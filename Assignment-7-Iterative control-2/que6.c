#include<stdio.h>
#include<conio.h>
int main()
{
    int n=3,i;
    while(n<=100)
    {
        for( i=2;i<=n-1;i++)
        {
          if(n%i==0)
          {
            break;
          }
        }
        if(i==n)
        printf("%d ",n);
        n++;
    }
    return 0;
}