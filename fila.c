#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
	
	int n=0;
	int vetor[10];
	int opcao=0;
	int i=0;
	int j=0;
	int quantidade=0;
	int cont=0;
	
	for(i=0;i<=9;i++){
		
		vetor[i]=0;
		
	}
	
	while(opcao!=4){
		
		printf("\n-------------------------\n");
		printf("\nescolha uma opcao abaixo:\n");
		printf("\n1 - para inserir na fila");
		printf("\n2 - para remover da fila");
		printf("\n3 - mostrar a fila");
		printf("\n4 - sair\n");
		printf("\n-------------------------\n");
		scanf("%d",&opcao);
		
		system("cls");
		
		if(opcao==1){
		
			printf("digite seu numero:");
			scanf("%d",&n);
			printf("digite quantas vezes quer inserir este numero:");
			scanf("%d",&quantidade);
			
			system("cls");
			
			i=0;
			while(i<quantidade){
		
				vetor[i]=n;	
				i=i+1;
				
				if(vetor[i]!=0){
					
					printf("\noverflow\n");
					
				}
			}
		}
	
		if(opcao==2){
		
			printf("digite quantos elementos deseja remover:");
			scanf("%d",&quantidade);
		
			system("cls");
		
			for(j=0;j<quantidade;j++){
		
				vetor[j]=0;
		
			}
		}
	
		if(opcao==3){
		
			for(i=0;i<=9;i++){
			
				printf("%d",vetor[i]);
			
			}
		
		}
	
	
	}
}
