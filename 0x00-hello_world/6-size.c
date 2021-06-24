#include <stdio.h>
/**
 * main - this is an example description of the function main
 *
 * Return: it should return 0
 */
int main(void)

{
	int intType;
	float floatType;
	char charType;
	long longType;
	unsigned long longlongType;
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
