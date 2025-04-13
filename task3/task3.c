#include <stdio.h>

int isPalindrome(const char* str, int start, int end){
	if(start >= end){
		printf("1 \n");
		return 0;
	}
	if(*(str + start) != *(str + end)){
		printf("0 \n");
		return 0;
	}
	return isPalindrome(str, ++start, --end);
}
