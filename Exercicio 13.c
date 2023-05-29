#include <stdio.h>

int main(){
    float salariob, parcela;

    printf("\n\tDigite seu salario bruto: ");
    scanf("%f", &salariob);

    printf("\n\tDigite o valor da prestacao: ");
    scanf("%f", &parcela);

    if(parcela > salariob * 0.30){
        printf("\n\tEmprestimo negado!\n");
    }
    else{
        printf("\n\tEmprestimo aceito!\n");
    }
    return 0;
}
