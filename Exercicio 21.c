#include<stdio.h>
#include <math.h>
/*
    .Ler tr�s valores inteiro (vari�veis A, B, e C) e efetuar o calculo da equa��o de segundo
    grau, apresentando: se para os valores informados for poss�vel fazer os c�lculos (delta
    positivo ou zero) apresentar mensagem �O valor de Delta � ...�; a mensagem �N�o h�
    ra�zes reais�, se n�o for poss�vel fazer o calculo (delta negativo); e a mensagem �N�o �
    equa��o de segundo grau�, se o valor de A for igual � zero.
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
