#include<stdio.h>

int main(void) {
   float nota1, nota2, nota3;

   printf("Entre a primeira nota: ");
   scanf("%f", &nota1);
   printf("Entre a segunda nota: ");
   scanf("%f", &nota2);
   printf("Entre a terceira nota: ");
   scanf("%f", &nota3);

   // no caso de um valor resultado de uma operação, prefiro alocar a variavél no
   // momento da operação. acho que deixa a relação de localidade da variavél e seu
   // significado mais clara do que declará-la ao topo da função, principalmente em caso de
   // funções maiores, onde vários valores são manipulados :)
   const float media = (nota1 + nota2 + nota3) / 3;
   printf("A média do aluno foi de: %.2f.", media);

   return 0;
}
