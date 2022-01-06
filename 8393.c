#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	
	int i, result = 0;
	for (i=1;i<=a;i++){
		result += i;
	}
	printf("%d", result);
	return 0;
	
}
