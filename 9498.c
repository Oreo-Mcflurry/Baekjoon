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
�ѹ��� a<test<b�� �ȵǴ� ���� 
���� �� a �� 85���ٸ�

   

(90 < 85) < 100

false < 100

0 < 100

true

   

�̷� ������ ����մϴ�.
*/
