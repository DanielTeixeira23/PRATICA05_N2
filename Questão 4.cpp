#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	printf("\t\t\tCALCULE OS TERMOS DE UMA P.G\n\n");
	
	int PG[10];
	int r;
	
	printf("Digite o valor inicial: ");
	scanf("%d", &PG[0]);
	printf("Digite a razão: ");
	scanf("%d", &r);

	for(int i=1; i<10; i++){
		PG[i] = PG[i-1] * r;
	}
	
	printf("\n");
	
	for(int j=0; j<10; j++){
		printf("%d ", PG[j]);
	}
	
	return 0;	
}
