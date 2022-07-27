#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,flag=0;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
int lcm;
    for(i=1;i<100;i++)
    {
        if(i%a==0 && i%b==0)
        {
          lcm=i;
          break;
        }
    }
    printf("HCF of %d and %d is %d",a,b,a*b/lcm);
getch();
return 0;
}
