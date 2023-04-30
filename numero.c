//calcola un numero di cifre intero
#include<stdio.h>
int main (void){
	int numero,contatore=0;
	
	printf("inserire un numero a due cifre positivo\n");
	scanf("%d",&numero);
	
	
	do{
	 
	numero= numero/10;
	contatore++;
	
	} while (numero>
	0); 
	
	printf("stampa il numero di cifre \n %d ",contatore);
	
return 0;
}
	
	
	
	
	
	
	