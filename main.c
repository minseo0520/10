#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(void){
	FILE*fp = NULL;
	char c;
	fp = fopen("sample.txt", "r");
	if(fp == NULL)
	{
		printf("failed to open\n");
		return 0;
	}
	
	while((c=fgetc(fp)) != EOF)  //한 글자 읽은 게 마지막이 아니면 
	{
	putchar(c);	//한 글자 출력 
	}
	fclose(fp); 
	
	return 0;
}
