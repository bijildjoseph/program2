#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,m,n,f;
printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter %d elements\n", n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter value to find\n");
scanf("%d",&m);
for (i=0;i<n;i++)
{
if (m==a[i])
{
printf("%d is found at %d\n",a[i],i+1);
f=1;
}
}
if (f!=1)
{
printf("not present");
}
return 0;
}
