#include <stdio.h>

/* Funciones para el manejo de caracteres de la biblioteca stdio.h. */

void main(void)
{
    char *cad0 = "Buenos días";  /* En este caso se asignan 11 caracteres más el
                                 caracter de terminación ‘\0’ a la variable cad0 —
                                 apuntador de tipo cadena de caracteres. */
    char cad1[20] = "";          /* Se asignan cuatro caracteres más el caracter
                                 de terminación a la variable tipo char cad1. Observa que
                                 cad1 tiene espacio para 20 caracteres. */
    char cad2[] = "México";      /* En este caso se asignan seis caracteres (más
                                 el caracter de terminación) a la variable cad2. Observa que cad2
                                 no tiene espacio reservado como cad1; por tal motivo, es
                                 necesario colocarlo así. */
    char cad3[] = {'B', 'e', 'n', 'i', 't', 'o', '\0'};
                                 /* Otra forma de asignar valores a la variable cad3. */
    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);
    /* La función puts es la apropiada para escribir cadenas de caracteres.
    Observa que esta función baja automáticamente una línea después de imprimir
    la cadena. */

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1);
    /* La función printf, con el formato de variable %s, también se puede utilizar
    para escribir cadenas de caracteres. Baja automáticamente una línea después
    de escribir la cadena.*/

    printf("\nLa cadena cad2 es: ");
    puts(cad2);
    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una línea de texto —se lee con gets—: \n");
    /* La función gets es la más apropiada para leer cadenas de caracteres. */
    gets(cad4);
    printf("\nLa cadena cad4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("\nIngrese una línea de texto —se lee con scanf—: \n");
    scanf("%s", cad5);
    /* La función scanf, con el formato de variable %s, también se puede utilizar
    para leer una cadena de caracteres, aunque con algunas restricciones. Si la
    cadena está formada por varias palabras sólo lee la primera. Por ejemplo, si
    ingresamos la cadena “Buenos días”, sólo lee la palabra “Buenos”, por
    ello; si queremos leer una cadena con espacios en blanco, es necesario
    que antes se lea esta formada por una sola palabra. */
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    /* La declaración de variables siempre se debe realizar en la parte inicial del
    programa. En este caso se coloca en el siguiente bloque para que el lector
    tenga claro que la variable p es de tipo char y que se va a
    usar como una bandera. */
    p = getchar();
    /* Se utiliza la función getchar para leer caracteres de la línea de texto y
    asignarlos a la variable de tipo cadena cad6. Observa que se leen caracteres
    mientras que p sea diferente de 0. */
    while (p != '\n')
    {
        cad6[p] = p;
        p = getchar();
    }
    /* Al final de la cadena se incorpora el caracter de terminación NULL para
    indicar el fin de la misma. */
    cad6[p] = '\0';
    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
