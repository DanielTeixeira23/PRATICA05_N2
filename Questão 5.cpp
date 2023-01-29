#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE UM NÚMERO E DESCUBRA SE ELE ESTÁ NO VETOR\n\n");
	
	int x[10];
	int num, achou=0, posicao=0;
	
	srand(time(NULL));
	
	printf("Os números foram sorteados aleatoriamente.\n\n");
	for(int i=0; i<10; i++){
		x[i] = rand()%100; 
	}
	
	printf("Digite um número entre 0 e 99: ");
	scanf("%d", &num);
	printf("\n");
	
	for(int i=0; i<10; i++){
		if(x[i]==num){
			achou = 1;
			posicao = i;
		}
	}
	
	if(achou){
		printf("O número digitado foi %d e ele está dentro do vetor na %d° posição.", num, achou+1);
	}else{
		printf("O número digitado não está no vetor.\n");
	}
	
	return 0;
}
