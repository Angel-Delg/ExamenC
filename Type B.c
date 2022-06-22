#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	
	int j , k;
    int N = 0;

    printf("Ingrese el tama%co del arreglo: ",164);
    scanf("%i", &N);

    long array1[N];
    int array2[N]; 
	int i;

    for(i = 0; i < N; i++)
    {
        printf("%i) Ingrese el valor: ",i + 1);
        scanf("%i", &array1[i]);

        array2[i] = pow(array1[i], 3);
    }

    printf("Arreglo original: ");
    
    for(k = 0; k < N; k++)
    {
        printf("%i, ", array1[k]);
    }
    
    printf("\n");


    printf("Arreglo resultante: ");

    for(j = 0; j < N; j++)
    {
        printf("%i, ",  array2[j]);
    }

    // getch();
}
