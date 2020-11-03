#define ex1
#include "stdio.h"

#ifdef ex1
struct data {
	char c;
	int i;
	long l;
	float f;
	double d;
	unsigned char uc;
	unsigned int ui;
	unsigned long ul;
};
struct data dados;
main()
{
    printf("Digite um char: ");
    scanf("%c",&dados.c);

    printf("Digite um int: ");
    scanf("%i",&dados.i);

    printf("Digite um long int: ");
    scanf("%li",&dados.l);

    printf("Digite um float: ");
    scanf("%f",&dados.f);

    printf("Digite um double: ");
    scanf("%lf",&dados.d);

    printf("Digite um unsigned char: ");
    scanf(" %c",&dados.uc);

    printf("Digite um unsigned int: ");
    scanf("%u",&dados.ui);

    printf("Digite um unsigned long int: ");
    scanf("%lu",&dados.ul);

    printf("        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-4c      %-6i    %-11li         %-6f            %-7lf\n", dados.c, dados.i, dados.l, dados.f, dados.d);
    printf("          %-3c                 %-5u               %-10lu", dados.uc, dados.ui, dados.ul);
}
#endif
