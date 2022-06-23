#include <stdio.h>

int main()
{

int rows = 0, columns = 0;

printf("Ingrese la cantidad de filas: ");
scanf("%i", &rows);

printf("Ingrese la cantidad de columnas: ");
scanf("%i", &columns);

int matriz[rows][columns];
int horizontal[columns];
int fila,columna;
int suma=0;
int i;

/*Bucle que registra los numeros introducidos de teclado*/
for(fila=0;fila<rows;fila++)
{
    for(columna=0;columna<columns;columna++)
    {
        printf("Introduce un numero para la posicion %d,%d: ",fila,columna);
        scanf("%d",&matriz[fila][columna]);
    }
}

for(fila=0;fila<rows;fila++)
{
    for(columna=0;columna<columns;columna++)
    {
        printf("%i	",matriz[fila][columna]);
    }
    printf("\n");
}


/*Bucle que suma las columnas y registra el resultado en el vector horizontal*/


printf("Suma de cada columna. \n");
for(columna=0;columna<columns;columna++)
{
    suma=0;
    for(fila=0;fila<rows;fila++)
    {
        suma+=matriz[fila][columna];
    }
    horizontal[columna]=suma;
}

/*Recorre el vector horizontal y muestra los resultados*/


for(i=0;i<columns;i++)
{
    printf("%i,	",horizontal[i]);
}
}
