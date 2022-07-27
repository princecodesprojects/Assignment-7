#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s,i;
    printf("Enter any number of which you want next prime number\n");
    scanf("%d",&n);
   s=n+1;
   while(1)
   {
    
    for(i=2;i<=s-1;i++)
    {
        if(s%i==0)
        {
            break;
        }
    }
    s++;
    if(i==s)
    {
        printf("%d",s);
        break;
    }
   }
   return 0;
}