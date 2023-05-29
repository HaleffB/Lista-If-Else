#include <stdio.h>
/*
    Para doar sangue é necessário ter idade entre 18 e 67 anos e peso superior a 50 Kg.
    Faça um programa que pergunte a idade e peso de uma pessoa e diga se ela pode doar
    sangue ou não.
*/
int main(){
    float idade, peso;

    printf("\n\tDigite sua idade e seu peso: ");
    scanf("%f%f", &idade, &peso);

    if(peso <=50 && idade < 18){
        printf("\n\tVoce nao tem idade nem peso suficiente para doar sangue! ");
    }
    else if(peso <= 50 && idade > 67){
        printf("\n\tVoce nao tem peso minimo e ultrapassou a idade maxima permitida!");
    }
    else if(peso <= 50){
        printf("\n\tVoce nao tem peso suficiente para doar!");
    }
    else if(idade > 67){
        printf("\n\tVoce ultrapassou a idade maxima para doar!");
    }
    else{
        printf("\n\tCom %.2fKg e %.2f anos e permitido doar sangue.", peso, idade);
    }
    return 0;
}
