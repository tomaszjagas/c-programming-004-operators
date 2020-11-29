/****************************************
* Description: some play with C operators
*****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	unsigned int a = 60; //0011 1100
	unsigned int b = 13; //0000 1101
	int results = 0;

	results = a >> 4; //0000 0011

	printf("results is %d\n", results);

	return 0;
}