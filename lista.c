#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct aluno{
	
	int matricula;
	char nome[3];
	float nota;
	
};

main(){
	
	int i=0, j=0, k=0;
	struct aluno aluno[3];
	int opcao=0;
	int matricula1;
	int cont=0;
	int soma=0;
	float media=0;
	while(opcao!=6){
		
		printf("\n-------------------\nEscolha uma opcao \n1 - incluir aluno\n2 - remover aluno\n3 - pesquisar aluno\n4 - mostrar todos os aluno\n5 - media dos alunos\n6-sair\n-------------------\n");
		scanf("%d",&opcao);
		system("cls");
		if(opcao==1){
		
	
			for(i=0;i<=2;i++){
				cont=cont+1;
				printf("\n-------------------\nDigite matricula\n-------------------\n");
				scanf("%d",&aluno[i].matricula);
				fflush(stdin);
				system("cls");
				printf("\n-------------------\nDigite o nome\n-------------------\n");
				gets(aluno[i].nome);
				fflush(stdin);
				system("cls");
				printf("\n-------------------\nDigite a nota\n-------------------\n");
				scanf("%f",&aluno[i].nota);
				fflush(stdin);
				system("cls");
			}
		}
		
		if(opcao==2){
		
				printf("\nDigite a posicao\n");
				scanf("%d",&matricula1);
				system("cls");
				
				for(k=0;k<=3;k++){
				
					if(aluno[k].matricula==matricula1){
						for(i=matricula1;i<=3;i++){
							aluno[i].matricula=aluno[i+1].matricula;
							aluno[i].nota=aluno[i+1].nota;
						
							for(j=0;j<=10;j++){
								aluno[i].nome[j] = aluno[i+1].nome[j];
							}
						}
					}
				
				}
				
		}
		
		if(opcao==3){
			printf("\nDigite a matricula\n");
			scanf("%d",&matricula1);
			system("cls");
			for(i=0;i<=2;i++){
				
				
				
				if(aluno[i].matricula==matricula1){
		
					printf("\n%s\n",aluno[i].nome);
					printf("\n%d\n",aluno[i].matricula);
					printf("\n%.1f\n",aluno[i].nota);
				
				}
				
			}
			
		}
		
		if(opcao==4){
			
			for(i=0;i<=2;i++){
				
				printf("\n----------\n%s\n",aluno[i].nome);
				printf("\n%d\n",aluno[i].matricula);
				printf("\n%.1f\n-----------\n",aluno[i].nota);	
				
			}
			
		}
		
		if(opcao==5){
			
			for(i=0;i<=2;i++){
			soma=aluno[i].nota+soma;
			}
			media=soma/cont;
			printf("\n%.1f\n",media);
		}
	}
}
