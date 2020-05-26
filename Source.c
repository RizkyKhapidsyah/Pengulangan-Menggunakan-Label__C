#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int i;
	i = 0;

awal:
	i = i + 1;
	printf("%i\n", i);

	if (i<10)
	{
		goto awal;
	}
	else
	{
		goto akhir;
		printf("Perintah ini tidak akan dieksekusi\n");
		printf("Perintah ini juga tidak akan dieksekusi.\n");

	}

akhir:
	printf("\n");

	_getch();
	return 0;
}