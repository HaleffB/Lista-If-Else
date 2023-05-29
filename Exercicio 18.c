#include <stdio.h>
/*
    Tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa, calcule
    e mostre seu peso ideal, utilizando as seguintes fórmulas:
    a. para sexo masculino: peso ideal = (72.7 * altura) - 58
    b. para sexo feminino: peso ideal = (62.1 * altura) - 44.7
*/
int main(){
    float peso, altura, pesoideal;
    char sex;

    printf("\n\tDigite seu peso: ");
    scanf("%f", &peso);

    printf("\n\tDigite sua altura: ");
    scanf("%f", &altura);

    fflush(stdin);
    printf("\n\tDigite seu sexo[m/f]: ");
    scanf("%c", &sex);

    if (sex == 'm' || sex == 'M'){
        pesoideal = (72.7 * altura) - 58;
    }
    else if(sex == 'f' || sex == 'F'){
        pesoideal = (62.1 * altura) - 44.7;
    }

    printf("\n\tSeu peso e de %.2f, o peso ideal para voce e %.2f\n", peso, pesoideal);

    return 0;
}
