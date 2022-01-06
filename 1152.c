#include <stdio.h>
#include <string.h>

int main() {
	char sentence[1000001];
	gets(sentence);
	
	int i, count = 0;\
	int len = strlen(sentence);
	for(i=0;i<len;i++){
		if(sentence[i] == ' '){
			count++;
		}	
	}
	if(sentence[0] == ' '){
		count--;
	}
	
	if(sentence[len-1] == ' '){
		count--;
	}
	printf("%d", count+1);
	return 0;
}
