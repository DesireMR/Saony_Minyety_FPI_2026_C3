#include <stdio.h>
#include <stdlib.h>

/* incremento de precio.
el programa, al recibir como dato el precio de un producto, incrementa al mismo %11 si es menor a 1500$ y %8 en caso contraro (mayor o igual).

PRE Y PNR: variables de tipo real. */

void main(void)
{
    float PRE, NPR;
    printf("ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
        NPR = PRE * 1.11;
    else
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %f.2f, NPR");
}
