#include <stdio.h>
/*
    As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$ 1,00 se
    forem compradas pelo menos 12. Escreva um programa que leia o n�mero de ma��s
    compradas, calcule e escreva o custo total da compra.
*/
int main(){
    int apple;
    float preco;

    printf("\n\tQuantas macas voce ira comprar: ");
    scanf("%i", &apple);

    if(apple < 12){
        preco = apple * 1.3;
        printf("\n\tComo voce comprou menos de uma duzia o valor de cada maca e de R$1,30\nTotalizando R$%.2f", preco);
    }
    else{
        printf("\n\tComo voce comprou uma duzia ou mais o valor de cada maca e de R$1,00\nTotalizando R$%i", apple);
    }
    return 0;
}
