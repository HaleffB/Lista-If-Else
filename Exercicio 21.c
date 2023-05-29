#include<stdio.h>
#include <math.h>
/*
    .Ler três valores inteiro (variáveis A, B, e C) e efetuar o calculo da equação de segundo
    grau, apresentando: se para os valores informados for possível fazer os cálculos (delta
    positivo ou zero) apresentar mensagem “O valor de Delta é ...”; a mensagem “Não há
    raízes reais”, se não for possível fazer o calculo (delta negativo); e a mensagem “Não é
    equação de segundo grau”, se o valor de A for igual à zero.
*/
int main(){
    float a, b, c, delta;

    printf("\n\tDigite o valor de a da equacao: ");
    scanf("%f", &a);

    printf("\n\tDigite o valor de b da equacao: ");
    scanf("%f", &b);

    printf("\n\tDigite o valor de c da equacao: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4*a*c;

    if (delta < 0){
        printf("\n\tO valor de delta e %.2f\n\n\tNao e possivel realizar a equacao!\n", delta);
    }
    else if (a == 0){
        printf("\n\tEssa nao e uma equacao de segundo grau!\n");
    }
    else if (delta == 0 || delta > 0){
        printf("\n\tO valor de delta e %f\n", delta);
    }

    return 0;
}
