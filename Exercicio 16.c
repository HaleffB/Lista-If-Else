#include <stdio.h>
/*
    Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e
    diga se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os
    meses tem 31 dias e que estejamos no ano de 2018.
*/
int main(){
    int dia, mes, ano;

    printf("\n\tDigite o dia mes e ano do que voce nasceu, nessa ordem\n");
    scanf("%i%i%i", &dia, &mes, &ano);

    if(dia > 31){
        printf("\n\tDia invalido!\n");
    }else if (mes > 12){
        printf("\n\tMes invalido!\n");
    }else if (ano > 2018){
        printf("\n\tAno invalido!\n");
    }else{
        printf("\n\tData valida.\n");
    }
    return 0;
}
