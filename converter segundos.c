# include <stdio.h>
main ()
{
	int h=0;
	int m=0;
	int s=0;

	printf("digite em segundos\n");
	scanf("%d",&s);
	
	h=(s/3600);
	m=(s/3600)/60;
	s=(s/3600)%60;
	
	printf("%d : %d : %d",h,m,s);	
	
}
