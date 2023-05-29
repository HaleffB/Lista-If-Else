#include <stdio.h>
/*
    Entrar com o salario de uma pessoa e imprimir o desconto do INSS segundo a tabela a
    seguir:
    Menor ou igual a R$ 600,00 Isento
    Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
    Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
    Maior que R$ 2000,00 30%
*/
int main(){
    float salario;

    printf("\n\tDigite seu salario R$");
    scanf("%f", &salario);

    if(salario <= 600){
        printf("\n\tVoce esta insento do INSS\n");
    }
    else if (salario > 600 && salario <= 1200){
        printf("\n\tCom um salario de R$%.2f sera descontado R$%.2f de INSS\n\n\tResultando em um salario de %.2f", salario, salario * 0.2, salario * 0.8);
    }
    else if (salario > 1200 && salario <= 2000){
        printf("\n\tCom um salario de R$%.2f sera descontado R$%.2f de INSS\n\n\tResultando em um salario de %.2f", salario, salario * 0.25, salario * 0.75);
    }
    else if (salario > 2000){
        printf("\n\tCom um salario de R$%.2f sera descontado R$%.2f de INSS\n\n\tResultando em um salario de %.2f", salario, salario * 0.3, salario * 0.7);
    }
}
