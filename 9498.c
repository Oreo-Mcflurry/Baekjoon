#include <stdio.h>



int main() {
	int test;
	scanf("%d", &test);
	
	if(90<=test && test<=100){
		printf("A"); }
		
	else if(80<=test && test<90){
		printf("B"); }	
	
	else if(70<=test && test<=80){
		printf("C"); }	
	
	else if(60<=test && test<=70){
		printf("D"); }
		
	else {
		printf("F"); }	
		
		
	return 0;
}
/*
한번에 a<test<b가 안되는 이유 
예를 들어서 a 가 85였다면

   

(90 < 85) < 100

false < 100

0 < 100

true

   

이런 식으로 계산합니다.
*/
