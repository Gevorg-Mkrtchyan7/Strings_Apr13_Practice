#include <stdio.h>
#include <string.h>

int isPalindrome(char*, int, int);

int main(){
	char str[30] = {};
	scanf("%s", str);
	int start = 0;
	int end = strlen(str) - 1;
	isPalindrome(str, start, end);
}
