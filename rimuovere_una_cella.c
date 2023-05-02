//elimina una posizione dell'array

#include <stdio.h>
#define MAX_SIZE 100 //dimensione massima della stringa

int main()
{
    int arr[MAX_SIZE];
    int i, grandezza, posizione;

    
    printf("inserire la grandezza di un array \n ");
    scanf("%d", &grandezza);
	
    printf("inserire gli elementi in un array \n ");
    for(i=0; i<grandezza; i++)//inserire gli elementi all'interno dell'array
    {
        scanf("%d", &arr[i]);
    }

    printf("seleziona la posizione dell'array da eliminare \n ");
    scanf("%d", &posizione);


    
    if(posizione < 0 || posizione > grandezza)
    {
        printf("posizione non valida inserire una posizione valida tra 1 ed %d", grandezza);
    }
    else
    {
        
        for(i=posizione-1; i<grandezza-1; i++)//copia l' elemento succesivo  nell'arrey        

        {
            arr[i] = arr[i + 1];
        }

        //rimuove un pezzo di array
        grandezza--;

        //stampa
        printf("\n gli elementi dell'array sono \n ");
        for(i=0; i<grandezza; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}