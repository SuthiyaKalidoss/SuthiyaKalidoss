#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int k;
scanf("%d",&k);
int pos=n-k;
for(i=pos;i<n;i++)
printf("%d",a[i]);
for(i=0;i<pos;i++)
printf("%d",a[i]);
return 0;
}
