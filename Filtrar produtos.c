#include<stdio.h>
main(){
	
	char nome[10] [10];
	float media=0;
	float preco[5];
	int soma=0;
	int qtd50=0;
	int qtd100=0;
	int i=0;
	
	while(i<=4){
	
		printf("digite o nome do produto:\n");
		scanf("%s",&nome[i]);
		fflush(stdin);
		
		printf("digite o preco do produto\n");
		scanf("%f",&preco[i]);
		fflush(stdin);
		
		if(preco[i]>100){
			soma=soma+preco[i];
			qtd100=qtd100+1;
		}
		
		if(preco[i]<50){
			
			qtd50=qtd50+1;
			
		}
		i=i+1;
	}
	
	printf("nome do produtos com precos inferior a 50: %d\n",qtd50);	
	printf("nome do produtos com precos entre 50 e 100:\n");
	i=0;
	while(i<=5){
		if(preco[i]>=50 && preco[i]<=50){
			
			printf("%s\n",nome[i]);
			
		}
		i=i+1;
	}
	
	media=soma/qtd100;
	printf("media dos produtos acima de 100 %f:\n",media);	
}
