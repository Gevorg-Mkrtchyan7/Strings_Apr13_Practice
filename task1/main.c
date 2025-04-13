#include <stdio.h>

void str_to_num(char*);

int main(){
	char str[10] = {};
	fgets(str, sizeof(str), stdin);
	str_to_num(str);
}
