#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// start = Primer arreglo
// end = Arreglo resultante con la raiz cuadrada de los elementos
// N = tamaño del arreglo

int main(void)
{

    // limpia pantalla.

    // Creamos una variable que indique el tamaño del arreglo
    int N = 0;

    printf("Ingrese el tama%co del arreglo: ",164);
    scanf("%i", &N);

    // Creamos los arreglos vacios y los rellenamos con datos del usuaro.
    double end[N];
    int start[N]; 
	int i;

    for(i = 0; i < N; i++)
    {
        printf("%i) Ingrese el valor: ",i + 1);
        scanf("%i", &start[i]);

        end[i] = sqrt(start[i]);
    }

    // Imprimimos los arreglos start y end
    int j , k;

    printf("Arreglo original: ");
    printf("[ ");
    for(k = 0; k < N; k++)
    {
        printf("%i, ", start[k]);
    }

    printf(" ]\n");

    // Cuadrado de cada elemento del arreglo start
    printf("Arreglo resultante: ");
    printf("[ ");

    for(j = 0; j < N; j++)
    {
        printf("%2.f, ",  end[j]);
    }
    printf(" ]\n");

    // getch();
}
