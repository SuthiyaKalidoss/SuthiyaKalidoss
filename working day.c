#include<stdio.h>
main(){
char a[100];
scanf("%s",a);
if((strcmp(a,"sunday")==0)||(strcmp(a,"SUNDAY")==0))
printf("false");
else
printf("true");
return 0;
}
