#include<stdio.h>

char teste (int n1){
	
	if(n1>0){
		char v="false";
	return v;
	}else{
	return "verdadeiro";
	}
	
}

int main(){
	
	int a;
	
	scanf("%d",&a);
	char ar = teste(a);
	printf("O numero e postivo? %c",ar);
}
