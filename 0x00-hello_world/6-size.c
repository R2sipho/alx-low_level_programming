#include <stdio.h>
/**
 * main - print the size of various types
 * retun:0 if exited properly,non zero */
int main(void){
	printf("Size of char:%d byte(s)\n",sizeof(char));
	printf("Size of int:%d byte(s)\n",sizeof(int));
	printf("Size of long int:%d byte(s)\n",sizeof(long int));
	printf("Size of float:%d byte(s)\n",sizeof(float));
	return(0);
}

