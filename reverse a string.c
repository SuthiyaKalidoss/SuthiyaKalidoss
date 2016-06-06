#include <stdio.h>
int main(void) {
	// your code goes here
	char str[10000];
	scanf("%s",str);
	int len=strlen(str);
	for(int i=len;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
