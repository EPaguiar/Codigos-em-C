#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){

	int s[50];
	int num=0;
	int base=0;
	int i=0;
	int resto=0;
	int denominador=0;
	int x=0;
	int vazio=0;
	int octal=0;
	int hexa=0;
	
	for(i=0;i<=49;i++){
		
		s[i]=NULL;
	}
	
	while(base!=5){
	
		printf("\nDigite o seu numero em decimal\n");
		scanf("%d",&num);
	
		printf("\nEscolha para qual base quer converter:\n1 - Binario\n2 - Octal\n3 - Hexadecimal\n4 - Todas\n5 - Sair\n");
		scanf("%d",&base);
		printf("\n");
		hexa=num;
		octal=num;
		i=0;
		system("cls");
		
		if(base==1 || base==4){
		
			while(num!=0){
			
				resto=num%2;
			
				denominador=num/2;
				num=denominador;
				s[i]=resto;
				if(num!=0){
			
				i=i+1; 
				}
			
			}
		
			while(vazio==0 && i>=0){
				
				if(s[i]!=1 && s[i]!=0){
				vazio=1;
				}
			
				x=s[i];
				s[i]=s[i+1];
			
				i=i-1;
				printf("%d",x);
			
			
			}
		printf(" em binario\n");
		}
	
		if(base==2 || base==4){
			i=0;
			
			while(octal!=0){
			
				resto=octal%8;
			
				denominador=octal/8;
				octal=denominador;
				s[i]=resto;
				if(octal!=0){
			
					i=i+1; 
				
				}
			
			}
		
			
			while(i>=0){
			
				x=s[i];
				s[i]=s[i+1];
			
				i=i-1;
				printf("%d",x);
			}
			
		printf(" em octal\n");
		}
	
		if(base==3 || base==4){
			i=0;
			while(hexa!=0){
			
				resto=hexa%16;
			
				denominador=hexa/16;
				hexa=denominador;
				s[i]=resto;
				if(hexa!=0){
			
					i=i+1; 
				
				}
			
			}
		
			
			while(i>=0){
			
				x=s[i];
				s[i]=s[i+1];
			
				i=i-1;
				if(x==10){
				
					printf("A");
				
				}
			
				if(x==11){
				
					printf("B");
				
				}
				if(x==12){
				
					printf("C");
				
				}
				if(x==13){
				
					printf("D");
				
				}
				if(x==14){
				
					printf("E");
				
				}
				if(x==15){
				
					printf("F");
				
				}
				if(x!=10 && x!=11 && x!=12 && x!=13 && x!=14 && x!=15){
			
					printf("%d",x);
			
				}
			}		
		printf(" em hexadecimal\n");
		}
	}
}
