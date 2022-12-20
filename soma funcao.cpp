#include<stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main(){

int r,n1,n2;

printf("Digite os valores que deseja somar");
scanf("%d",&n1);
scanf("%d",&n2);
r = somar(n1, n2);
printf("Resultado: %d", r);

}
