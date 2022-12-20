#include<stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main(){

int r,n1,n2;

printf("Digite os valores que deseja somar\n");
printf("\nDigite o primeiro numero: ");
scanf("%d",&n1);
printf("Digite o segundo numero: ");
scanf("%d",&n2);
r = somar(n1, n2);
printf("\nResultado: %d", r);

}
