#include <stdio.h>
/*
    Fazer um programa para ler a duas notas, calcular e mostrar a média com a mensagem:
    Inferior a 5,0 – “Reprovado”
    De 5,1 a 6,9 – “Exame”
    De 7,0 a 10 – “Aprovado”
*/
int main(){
    float n1, n2, m;

    printf("\n\tDigite a primeria nota: ");
    scanf("%f", &n1);

    printf("\n\tDigite a segunda nota: ");
    scanf("%f", &n2);

    m = (n1 + n2) / 2;

    if (m <= 50){
        printf("\n\tSua media e de %.1f \n\n\tMedia de 5.0 ou inferior - REPROVADO!\n", m);
    }
    else if (m > 50 && m < 70)
    {
        printf("\n\tSua media e %.1f \n\n\tMedia entre 5.1 e 6.9 - EXAME!\n", m);
    }
    else if (m >= 70 && m <= 100)
    {
        printf("\n\tSua media e %.1f \n\n\tMedia entre 7 e 10 - APROVADO!\n", m);
    }
    else{
        printf("\n\tDigite suas notas corretamente!");
    }
    return 0;
}
