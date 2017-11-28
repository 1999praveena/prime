#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,p=0;
printf("enter num");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
p=1;
break;
}
}
if(p==0)
{
printf("prime number",n);
}
else
{
printf("not a prime number",n);
}
getch();
return 0;
}


