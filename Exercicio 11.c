#include <stdio.h>
/*
    Sabendo que somente os munic�pios que possuem mais de 20.000 eleitores aptos tem
    segundo turno nas elei��es para prefeito caso o primeiro colocado n�o tenha mais que
    50% dos votos, fazer um algoritmo que leia o nome do munic�pio, a quantidade de
    eleitores aptos, o numero de votos do candidato mais votado e informar se ele ter� ou
    n�o segundo turno em sua elei��o municipal.
*/
int main(){
    char mun[61];
    float eleiap, eleicand;

    printf("\n\tDigite o nome do municipio: ");
    scanf("%s", mun);

    printf("\n\tDigite a quantidade total de votantes do municipio: ");
    scanf("%f", &eleiap);

    printf("\n\tDigite o total de votos do canditato mais votado: ");
    scanf("%f", &eleicand);

    if(eleiap > 20000 && eleicand > eleiap/2){
        printf("\n\tNo municipio de %s ocorrera segundo turno!\n", mun);
    }
    else{
        printf("\n\tNo municipio de %s nao ocorrera segundo turno!\n", mun);
    }
    return 0;
}
