#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	printf("\t\t\tCALCULE OS TERMOS DE UMA P.A\n\n");
	
	int PA[10];
	int r;
	
	printf("Digite o valor inicial: ");
	scanf("%d", &PA[0]);
	printf("Digite a raz�o: ");
	scanf("%d", &r);

	for(int i=1; i<10; i++){
		PA[i] = PA[i-1] + r;

	}
	
	printf("\n");
	
	for(int j=0; j<10; j++){
		printf("%d ", PA[j]);
	}
	
	return 0;	
}
