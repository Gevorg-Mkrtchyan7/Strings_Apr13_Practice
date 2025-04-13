#include <stdio.h>
#include <string.h>

int str_to_num(const char* str){
	int a = 0;
	int n = strlen(str);
	int num = 0;
	int sign = 1;
	int i = 0;
	if(str[0] == '-'){
		sign = -1;
		++i;
	}
	while(str[i] > 47 && str[i] < 58){
		a = *(str + i) - '0';	
		num = num * 10 + a;
		++i;
	}
	return num * sign;
} 
