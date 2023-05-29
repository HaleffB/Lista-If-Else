#include <stdio.h>
/*
    Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo feminino e tiver
    menos que 25 anos, imprimir nome e a mensagem: ACEITA. Caso contrário imprimir
    nome e a mensagem: NÃO ACEITA.
*/
int main(){
    char nome[61], sexo;
    int idade;

    printf("\n\tDigite seu primeiro nome: ");
    scanf("%s", nome);

    printf("\n\tDigite sua idade: ");
    scanf("%i", &idade);

    printf("\n\tDigite seu sexo(f/m): ");
    scanf("%s", &sexo);

    if(sexo == 'f' && idade < 25){
        printf("\n\tParabens voce foi aceita!\n", nome);
    }
    else{
        printf("\n\tInfelizmente voce foi recusado(a)!\n", nome);
    }
    return 0;
}
