#include<stdio.h>
int main()
{
int  n,m;
scanf("%d",&n);
int a[n],sum=0;
for(m=0;m<n;m++)
{
scanf("%d",&a[m]);
sum=sum+a[m];
}
printf("Average=%d",sum/n);
return 0;
}
