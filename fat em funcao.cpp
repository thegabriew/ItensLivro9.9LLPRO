#include<stdio.h>

int fatorial (int n){
	int fat=1;
	for (int i=n; i>1; i--){
		fat = fat * i;
	} 
	return fat;	
}

int main (){
	
	int a,num;
	
	scanf("%d",&num);
	a=fatorial(num);
	printf("%d",a);
	return a;
	
}
