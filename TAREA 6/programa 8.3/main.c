#include <stdio.h>
#include <string.h>

/* Estructuras 3.
El programa muestra la manera en que se declara una estructura anidada, así
como la forma de acceso a los campos de las variables o apuntadores de tipo
estructura, tanto para lectura como para escritura. Se utiliza además una
función que recibe como parámetro un apuntador de tipo estructura. */

typedef struct                   /* Declaración de la estructura utilizando
                                 typedef. */
{
    char calle[20];
    int numero;
    int cp;
    char ciudad[20];
} direccion;

struct empresa                   /* Declaración de la estructura anidada. */
{
    char nombre[20];
    int empleados;
    char telefono[20];
    float ventas;
    direccion domicilio;         /* dirección es un campo de tipo estructura
                                 direccion de la estructura empresa. */
};

void Lectura(struct empresa *);  /* Prototipo de función. */

void main(void)
{
    struct empresa *emp;
    /* Observa que al utilizar typedef no es necesario indicar la palabra
    reservada struct. */
    emp = new(struct empresa);
    printf("Ingrese el nombre del empleado: ");
    gets(emp->nombre);
    printf("Ingrese el número del empleado: ");
    scanf("%d", &emp->empleados);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &emp->ventas);
    printf("Ingrese la dirección del empleado: ");
    gets(emp->domicilio.calle);
    printf("Ingrese el número de la dirección: ");
    scanf("%d", &(*emp).domicilio.numero);
    printf("Ingrese la ciudad del empleado: ");
    scanf("%d", &emp->domicilio.cp);
    printf("Ingrese la ciudad del empleado: ");
    gets(emp->domicilio.ciudad);
    printf("Domicilio: ");
    gets(emp->domicilio.calle);
}

void Lectura(struct empresa *e)
/* Esta función permite leer los campos de un apuntador de tipo estructura
empresa. */
{
    printf("\nIngrese el nombre de la empresa: ");
    gets(e->nombre);
    printf("\nIngrese el número de empleados de la empresa: ");
    scanf("%d", &e->empleados);
    printf("\nIngrese el teléfono de la empresa: ");
    scanf("%s", &e->telefono);
    printf("\nIngrese las ventas de la empresa: ");
    scanf("%f", &e->ventas);
    printf("\nIngrese la dirección de la empresa: ");
    gets(e->domicilio.calle);
    printf("\nIngrese el número de la dirección: ");
    scanf("%d", &e->domicilio.numero);
    printf("\nIngrese el código postal de la dirección de la empresa: ");
    scanf("%d", &e->domicilio.cp);
    printf("\nIngrese la ciudad de la dirección de la empresa: ");
    gets(e->domicilio.ciudad);
}

void main(void)
{
    struct empresa e1 = {"Cigarros", 15000, "87120303", 234000.50, "Calle 20",
    50, 52000, "CDMX"};
    struct empresa e2, e3, *e4, *e5, *e6;
    /* observa que en este caso se declaran apuntadores de tipo estructura empresa,
    los cuales no tienen ningún valor inicial. Para poder utilizarlos es necesario
    solicitar memoria para almacenar los datos que se van a leer. */
    e4 = new(struct empresa);
    e5 = new(struct empresa);
    e6 = new(struct empresa);
    /* En el siguiente bloque se leen los campos de dos variables, e2 y e3
    y se asignan valores a los campos de e4. */
    printf("Ingrese el nombre de la empresa 2: ");
    gets(e2.nombre);
    printf("Ingrese el número de empleados de la empresa 2: ");
    scanf("%d", &e2.empleados);
    printf("Ingrese el teléfono de la empresa 2: ");
    scanf("%s", e2.telefono);
    printf("Ingrese las ventas de la empresa 2: ");
    scanf("%f", &e2.ventas);
    printf("Ingrese la dirección de la empresa 2: ");
    gets(e2.domicilio.calle);
    printf("Ingrese el número de la dirección: ");
    scanf("%d", &e2.domicilio.numero);
    printf("Ingrese el código postal: ");
    scanf("%d", &e2.domicilio.cp);
    printf("Ingrese la ciudad: ");
    gets(e2.domicilio.ciudad);
    strcpy(e4->nombre, e2.nombre);
    e4->empleados = e2.empleados;
    strcpy(e4->telefono, e2.telefono);
    e4->ventas = e2.ventas;
    strcpy(e4->domicilio.calle, e2.domicilio.calle);
    e4->domicilio.numero = e2.domicilio.numero;
    e4->domicilio.cp = e2.domicilio.cp;
    strcpy(e4->domicilio.ciudad, e2.domicilio.ciudad);
    printf("\nIngrese el nombre de la empresa 3: ");
    gets(e3.nombre);
    printf("Ingrese el número de empleados de la empresa 3: ");
    scanf("%d", &e3.empleados);
    printf("Ingrese el teléfono de la empresa 3: ");
    scanf("%s", e3.telefono);
    printf("Ingrese las ventas de la empresa 3: ");
    scanf("%f", &e3.ventas);
    printf("Ingrese la dirección de la empresa 3: ");
    gets(e3.domicilio.calle);
    printf("Ingrese el número de la dirección: ");
    scanf("%d", &e3.domicilio.numero);
    printf("Ingrese el código postal: ");
    scanf("%d", &e3.domicilio.cp);
    printf("Ingrese la ciudad: ");
    gets(e3.domicilio.ciudad);
    strcpy(e5->nombre, e3.nombre);
    e5->empleados = e3.empleados;
    strcpy(e5->telefono, e3.telefono);
    e5->ventas = e3.ventas;
    strcpy(e5->domicilio.calle, e3.domicilio.calle);
    e5->domicilio.numero = e3.domicilio.numero;
    e5->domicilio.cp = e3.domicilio.cp;
    strcpy(e5->domicilio.ciudad, e3.domicilio.ciudad);
    Lectura(e6);
}     /* En la función Lectura se leen los campos de una variable, e4, y un apuntador
    de tipo estructura, *e2. */
    e2 = new (struct empleado);
    Lectura(e2);

    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%d\t%.2f\t%s\t%d\t%d\t%s",     e1->nombre,     e1->departamento,
    e1->sueldo,
    e1->direccion.calle,          e1->direccion.numero,         e1->direccion.cp,
    e1->direccion.localidad);

    printf("\nDatos del empleado 4n");
    printf("%s\t%d\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo,
    e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
}
