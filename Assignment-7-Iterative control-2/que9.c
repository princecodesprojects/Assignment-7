#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum=0,s;
    printf("Emter a anumber\n");
    scanf("%d",&n);
   s=n;
    while(n)
    {
         r=n%10;
         sum=sum+r*r*r;
         n=n/10;
    }
    if(s==sum)
    printf("%d is armstrong number",s);
    else
    printf("%d is not armstrong number",s);
    return 0;
}