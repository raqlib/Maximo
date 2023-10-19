#include <stdio.h>


int main() {
    int numOriginal, max=0, posmax, contador=1;
    //Primeiro valor inserido
    printf("Introduza um numero: "); //5
    scanf("%d", &numOriginal);

    max=numOriginal; //5
    posmax=contador; //posicao 1

    while (numOriginal!=0) {
        
        contador=contador+1; //contador passa a 2(segunda posicao)

        printf("\nIntroduza um numero: ");
        scanf("%d", &numOriginal); //5

        if (numOriginal>max) {
            max=numOriginal;
            posmax= contador; 
            
        }
        
        

    } 
printf("Maior numero: %d, Posicao: %d", max, posmax);
}