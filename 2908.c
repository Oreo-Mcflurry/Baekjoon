#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char num1[4];
    char num2[4];


	scanf("%s %s", num1, num2);
	
    int i, mid;

        mid = num1[0];
        num1[0] = num1[2];
        num1[2] = mid;

        mid = num2[0];
        num2[0] = num2[2];
        num2[2] = mid;

    if(atoi(num1) > atoi(num2)){
        printf("%s", num1);
    }   else{
        printf("%s", num2);
    }

    return 0;
}
