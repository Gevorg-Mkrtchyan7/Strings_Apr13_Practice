#include <stdio.h>
#include <string.h>

void str_cat(char* str1, const char* str2){
	strcat(str1 + strlen(str1), str2);
	printf("%s \n", str1);
}
