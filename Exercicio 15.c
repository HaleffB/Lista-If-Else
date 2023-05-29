#include <stdio.h>
/*
    Elabore um programa que realize 5 perguntas para uma pessoa sobre um determinado
    crime. As perguntas são:
    a. "Telefonou para a vítima?"
    b. "Esteve no local do crime?"
    c. "Mora perto da vítima?"
    d. "Devia para a vítima?"
    e. "Já trabalhou com a vítima?"
    O programa deve no final emitir uma classificação sobre a participação da pessoa no
    crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como
    "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será
    classificado como "Inocente".
*/
int main(){
    char op;
    int s = 0;

    printf("\n\tResponda com S ou N\n");
    printf("\n\tTelefonou para a vitima: ");
    scanf("%c", &op);

    if(op == 's' || op == 'S'){
        s++;
    }
    fflush(stdin);
    printf("\n\tEsteve no local do crime: ");
    scanf("%c", &op);

    if(op == 's' || op == 'S'){
        s++;
    }
    fflush(stdin);
    printf("\n\tMora perto da vitima: ");
    scanf("%c", &op);

    if(op == 's' || op == 'S'){
        s++;
    }
    fflush(stdin);
    printf("\n\tDevia para vitima: ");
    scanf("%c", &op);

    if(op == 's' || op == 'S'){
        s++;
    }
    fflush(stdin);
    printf("\n\tTrabalhou com a vitima: ");
    scanf("%c", &op);

    if(op == 's' || op == 'S'){
        s++;
    }
    fflush(stdin);
    if (s == 5) {
    printf("\n\tClassificacao: Assassino\n");
    } else if (s >= 3) {
    printf("\n\tClassificacao: Cumplice\n");
    } else if (s == 2) {
    printf("\n\tClassificacao: Suspeito\n");
    } else {
    printf("\n\tClassificacao: Inocente\n");
    }
    return 0;
}
