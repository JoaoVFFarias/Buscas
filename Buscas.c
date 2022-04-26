#include <stdio.h>
#include <stdlib.h>



int Binary(int vet[],int busca,int inicio,int final){
	int loop = 0;
	int i;
	int meio;
	int contador = 0;
	

 while(loop < 1000){
 meio = (final + inicio)/2;
 
	if(meio == busca){
		contador++;
	
		printf("Binaria: %d repeticoes\n", contador);
		break;
	}
	
	if(meio < busca){
		contador++;
		inicio = meio ;
	}
	else if(meio > busca){
		contador++;
		final = meio ;	
	}
	loop++;
	
	if(loop == 0){
		printf("O valor desejado nao esta nesse vetor\n");
		printf("repeticoes: %d\n", contador);
	}
}

	
}

int Linear(int vet[],int busca,int inicio, int final){
	int i;
	int contador;
	
	for(contador = inicio; contador < final;contador++){
		if(vet[contador] == busca){
			printf("Linear: %d repeticoes\n", contador);
			break;
		}
	}
	if(contador >= final){
		printf("Linear: %d repeticoes\n", contador);
	}
	
}

int Freq(int vet[],int busca,int inicio, int final){
	int freq[1000];
	int i;
	for(i = inicio;i < final; i++){
		freq[vet[i]]++;
	}
	printf("Frequencia: %d comparacoes", freq[busca]);
}

int main(int argc, char *argv[]) {
	int inicio = 0;
	int final = 1000;
	int vetor[1000];
	int buscado;
	int i;
	
	printf("insira o valor que deseja encontrar:\n");
	scanf("%d", &buscado);
	
	for(i = 0;i < 1000;i++){
		vetor[i] = i+1;
	}
	
	Linear(vetor,buscado,inicio,final);
	Binary(vetor,buscado,inicio,final);
	Freq(vetor,buscado,inicio,final);

	return 0;
}
