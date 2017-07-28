/*
자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
작성 언어 : C
*/
#include <stdio.h>
int main(){
	int input, i;
	scanf("%d", &input);

	for(i=1;i<=input; i++){
		printf("%d\n", i);
	}

    return 0;
}