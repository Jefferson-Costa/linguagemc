#include <stdio.h>
#include <stdlib.h> //Alocação de Meméria


void main () {     //Função que retorna conjunto vazio
    int soma, num1, num2;
    printf("Informe o primeiro numero\n");
    scanf("%d", &num1);
    printf("Informe o segundo numero\n");
    scanf("%d", &num2);

    soma=num1+num2;

    printf("Resultado da soma %d\n",soma);


}