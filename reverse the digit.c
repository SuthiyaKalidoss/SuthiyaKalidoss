#include<stdio.h>
main(){
int n,i=0,sum=1;
scanf("%d",&n);
if(n==0){
printf("0");
return 0;
}
int a[100];
while(n){
	a[i]=n%10;
	n=n/10;
	i++;
}
for(int j=0;j<i;j++)
printf("%d",a[j]);
return 0;
}
