#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE 10 NÚMEROS E VEJA O MAIOR E O MENOR NÚMERO DIGITADO\n\n");
	
	int num[10], menor, menor_i, maior, maior_i;
	
	for(int i=0; i<10; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &num[i]);
	}
	
	maior = num[0];
	maior_i = 0;
	menor = num[0];
	menor_i = 0;
	
	for(int j=0; j<10; j++){
		if(maior < num[j]){
			maior = num[j];
			maior_i = j;
		}
		if(menor>num[j]){
			menor = num[j];
			menor_i = j;
		}
	}
	
	printf("\nMaior número é: %d\nSua posição é: %d°\n", maior, maior_i + 1);
	printf("Menor número é: %d\nSua posição é: %d°",  menor, menor_i + 1);
	
	return 0;
}
