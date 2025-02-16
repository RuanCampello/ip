#include <stdio.h>

//  ordenação do array com o idx [1] sendo o maior e o [0] o menor
void sort(int arr[]) {
    if (arr[0] > arr[1]) {
        const int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
}


int main(void) {
    // são três unidades e cada uma tem duas notas
    // uma pratica e outra teorica.
    int grades[3][2];
    double final = 0.0; // a nota final, que servirá pra mostrar a nota conceito.

    // nós precisamos considerar a maior e menor nota de cada unidade.
    // podemos, portanto, separar as unidades em um array de 3
    // e colocar cada nota nessas unidades, formando uma matriz de 3x2
    // talvez seja "overengineering", mas não é tão complicado.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite a %d nota da %d unidade: ", i + 1, j + 1);
            scanf("%d", &grades[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        sort(grades[i]);

        const double uni_grade = ((grades[i][1] * 6.0) + (grades[i][0] * 4.0)) / 10.0;
        printf("A nota unificada da unidade %d é %0.2f\n", i, uni_grade);
        final += uni_grade;
    }
    final /= 3.0;

    // nos poderiamos, claro, usar um array para delimitar esses intervalos
    // mas já "complicamos" d+ no assignment das variáveis e calculo das unidades.
    char con;
    if (final >= 9.0)
        con = 'A';
    else if (final >= 8.0)
        con = 'B';
    else if (final >= 7.0)
        con = 'C';
    else if (final >= 6.0)
        con = 'D';
    else if (final >= 5.0)
        con = 'E';
    else
        con = 'F';

    printf("A média das unidades foi %0.2lf e a nota conceito %c", final, con);


    return 0;
}
