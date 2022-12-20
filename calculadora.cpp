#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int somar(int a, int b) {
    return a + b;
}
int subtrair(int a, int b) {
    return a - b;
}
int multiplicar(int a, int b) {
    return a * b;
}
float dividir(int a, int b) {
    return (float) a / b;
}

void menu() {    
    printf("\n\n _______________________________ \n");
    printf("|__________OPERAÇÕES____________|\n");
    printf("|_______________________________|\n");
    printf("|___1__SOMA_____________________|\n");
    printf("|___2__SUBTRAÇÃO________________|\n");
    printf("|___3__MULTIPLICAÇÃO____________|\n");
    printf("|___4__DIVISÃO__________________|\n");
    printf("|_______________________________|\n");
    printf("|___0__ENCERRAR_________________|\n");
    printf("|_______________________________|\n\n");
    printf("Escolha uma operação: ");
}

int main() {
    int op = 1, n1, n2, r;
    float rf;
   
    setlocale(LC_ALL, "Portuguese");
   
    while(op == 1) {
   
        menu();
        scanf("%d", &op);
       
        if(op == 1 || op == 2 || op == 3 || op == 4) {
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
        }
       
        switch(op) {
            case 1:
                r = somar(n1, n2);
                printf("Resultado: %d", r);
                break;
            case 2:
                r = subtrair(n1, n2);
                printf("Resultado: %d", r);
                break;
            case 3:
                r = multiplicar(n1, n2);
                printf("Resultado: %d", r);
                break;
            case 4:
                rf = dividir(n1, n2);
                printf("Resultado: %.2f", rf);
                break;
            case 0:
                printf("Programa encerrado");
                return 0;
                break;
            default:
                printf("Opção inválida"); 
				           
        }
       
        printf("\n\nDeseja realizar outra operação?\n");
        printf("0 - Não   1 - Sim:      ");
        scanf("%d", &op);
   		system("cls"); 
    }
   
    return 0;
}
