#include <stdio.h>
#include <stdlib.h>
#include "add.h"

void usage(char * bin){
	printf("usage:\n");
	printf("\t%s [num] [op] [num]\n", bin);
	printf("\n");
	printf("\tAll 3 parameters are required\n");
}

int main(int count, char *args[]){
	
	if (count != 4){
		printf("invalid parameters\n\n");
		usage(args[0]);
		return 1;
	}
	
	char * str_num1 = args[1];
	char * str_num2 = args[3];
	
	char * str_op = args[2];
	
	int num1 = atoi(str_num1);
	int num2 = atoi(str_num2);
	
	if ( str_op[0] == '+' ){
		int sum = add(num1, num2);
		printf("%d\n", sum);
		return 0;
	}
	
	printf("invalid operation\n\n");
	usage(args[0]);
	return 1;
}