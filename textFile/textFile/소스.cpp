#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* f1, * f2;
	char c;
	printf("File : a.txt\n");

	f1 = fopen("a.txt", "r");
	while ((c = getc(f1)) != EOF) printf("%c", c);
	fclose(f1);

	printf("----- end of a.txt\n");

	printf("Copy a.txt to b.txt\n");

	f1 = fopen("a.txt", "r");
	f2 = fopen("b.txt", "w");
	while ((c = getc(f1)) != EOF) fputc((int)c, f2);
	fclose(f1);
	fclose(f2);

	printf("File : b.txt\n");

	f2 = fopen("b.txt", "r");
	while ((c = getc(f2)) != EOF) printf("%c", c);
	fclose(f2);

	printf("----- end of b.txt\n");

	return 0;
}