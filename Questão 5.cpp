#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE UM N�MERO E DESCUBRA SE ELE EST� NO VETOR\n\n");
	
	int x[10];
	int num, achou, posicao;
	
	srand(time(NULL));
	
	printf("Os n�meros foram sorteados aleatoriamente.\n\n");
	for(int i=0; i<10; i++){
		x[i] = rand()%100; 
	}
	
	printf("Digite um n�mero entre 0 e 99: ");
	scanf("%d", &num);
	printf("\n");
	
	for(int i=0; i<10; i++){
		if(x[i]==num){
			achou = 1;
			posicao = i;
		}
	}
	
	if(achou){
		printf("O n�mero digitado foi %d e ele est� dentro do vetor na %d� posi��o.", num, achou+1);
	}else{
		printf("O n�mero digitado n�o est� no vetor.\n");
	}
	
	return 0;
}
