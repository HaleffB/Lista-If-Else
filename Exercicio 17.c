#include <stdio.h>
/*
    A jornada de trabalho semanal de um funcion�rio � de 40 horas. O funcion�rio que
    trabalhar mais de 40 horas receber� hora extra, cujo c�lculo � o valor da hora regular
    com um acr�scimo de 50%. Escreva um algoritmo que leia o n�mero de horas
    trabalhadas em um m�s, o sal�rio por hora e escreva o sal�rio total do funcion�rio, que
    dever� ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o
    m�s possua 4 semanas exatas).
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
