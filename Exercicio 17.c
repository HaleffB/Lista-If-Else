#include <stdio.h>
/*
    A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que
    trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular
    com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas
    trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que
    deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o
    mês possua 4 semanas exatas).
*/
int main(){
    float salarioh, horas, horasex = 0, salariof;

    printf("\n\tDigite seu salario por hora: ");
    scanf("%f", &salarioh);

    printf("\n\tDigite suas horas trabalhadas: ");
    scanf("%f", &horas);

    if (horas > 40){
        horasex = horas - 40;
        horas = horas - horasex;
    }

    salariof = horas * salarioh + (horasex * (salarioh *150/100));

    printf("\n\tSeu salario e de R$%.2f\n", salariof);

    return 0;
}
