#include<stdio.h>
#include<locale.h>

char* teste (int n1){
	
	if(n1>=0){
	return "Falso";
	}
	return "Verdadeiro";
	
}

int main(){

	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a;
	
	scanf("%d",&a);
	char* ar = teste(a);
	printf("O número é negativo?\n%s",ar);
	
	return 0;
}
