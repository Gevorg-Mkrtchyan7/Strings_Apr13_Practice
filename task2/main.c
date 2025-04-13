#include <stdio.h>
#include <string.h>

void str_cat(char*, char*);

int main(){
	char str1[40] = {};
	char str2[40] = {};
	scanf("%10s", str1);
	scanf("%10s", str2);
	str1[strlen(str1)] = 32;
	if(strlen(str1) + strlen(str2) > sizeof(str1)){
		return 0;
	}
	str_cat(str1, str2);
}
