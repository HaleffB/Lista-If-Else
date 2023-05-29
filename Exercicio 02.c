#include <stdio.h>
/*
    Faça um programa que receba a idade de uma pessoa identifique se ela pode retirar o
    título de eleitor votar neste ano. Sabendo que:
    a. 16 e 17 anos tem o voto facultativo;
    b. 18 a 70 anos voto obrigatório;
    c. Acima de 70 anos tem voto facultativo.
*/
int main(){
    int idade;

    printf("\n\tDigite sua idade: ");
    scanf("%i", &idade);

    if(idade < 16){
        printf("\n\tVoce nao esta apto para fazer o titulo!\n");
    }
    else if(idade >= 16 && idade < 18)
    {
        printf("\n\tA realizacao do titulo e facultativa!\n");
    }
    else if(idade >=18 && idade <=70)
    {
        printf("\n\tSeu voto e obrigatorio!\n");
    }
    else
        printf("\n\tSeu voto e facultativo!\n");
    return 0;
}
