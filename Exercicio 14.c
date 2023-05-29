#include <stdio.h>
/*
    A prefeitura de Cascavel abriu uma linha de crédito para os funcionários estatutários. O
    valor máximo da prestação não poderá ultrapassar 30% do salario bruto. Fazer um
    algoritmo que permita entrar com o salario bruto e o valor da prestação e informar se o
    empréstimo pode ou não ser concedido.
*/
int main(){
    float salario, aumento, perce;

    printf("\n\tDigite seu salario: ");
    scanf("%f", &salario);

    if(salario <= 280){
        aumento = salario * 0.2;
        perce = 20;
    }
    else if (salario > 280 && salario <= 700){
        aumento = salario * 0.15;
        perce = 15;
    }
    else if (salario > 700 && salario <= 1500){
        aumento = salario * 0.10;
        perce = 10;
    }
    else if (salario > 1500){
        aumento = salario * 0.05;
        perce = 5;
    }
    printf("\n\tSeu salario antes do reajuste era de R$%.2f\n", salario);

    printf("\n\tCom esse valor sera concedido um aumento de %.0f porcento\n", perce);

    printf("\n\tResultando um salario de %.2f\n", salario + aumento);

    return 0;
}
