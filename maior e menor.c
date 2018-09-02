#include<stdio.h>

main(){
	
	int numero=0;
	int maior=numero;
	int menor=numero;
	int qtdmaior=0;
	int qtdmenor=0;
	
	printf("digite seu numero\n");
	scanf("%d",&numero);
	
	while(numero!=0){
		
		if(numero>maior){
			
			maior=numero;
			
		}
		
		if(numero<menor){
			
			menor=numero;
			
		}
		
		if(numero>0){
			
			qtdmaior=qtdmaior+1;
			
		}
		
		if(numero<0){
			
			qtdmenor=qtdmenor+1;
			
		}
		
		printf("digite seu numero\n");
		scanf("%d",&numero);
		
	}
	
	printf("o maior numero eh:%d\n",maior);
	printf("o menor numero eh:%d\n",menor);
	printf("o quantidade de maiores que 0 eh: %d\n",qtdmaior);
	printf("o quantidade de menores que 0 eh: %d\n",qtdmenor);
	
}
