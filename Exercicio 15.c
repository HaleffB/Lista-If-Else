#include <stdio.h>
/*
    Elabore um programa que realize 5 perguntas para uma pessoa sobre um determinado
    crime. As perguntas s�o:
    a. "Telefonou para a v�tima?"
    b. "Esteve no local do crime?"
    c. "Mora perto da v�tima?"
    d. "Devia para a v�tima?"
    e. "J� trabalhou com a v�tima?"
    O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no
    crime. Se a pessoa responder positivamente a 2 quest�es ela deve ser classificada como
    "Suspeita", entre 3 e 4 como "C�mplice" e 5 como "Assassino". Caso contr�rio, ele ser�
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
