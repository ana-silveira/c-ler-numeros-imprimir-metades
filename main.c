/*
45. Fa�a um programa que leia dez n�meros e imprima a metade de cada n�mero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;

    for ( int i = 1; i <= 10; i++) {
        printf("Informe o n�mero %d: ", i);
        scanf("%d", &numero);

        int metade = numero / 2.0 ;

        printf(" A metade do valor de %d � %d \n ", numero, metade);
    }


}
