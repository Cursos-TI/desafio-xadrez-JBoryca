#include <stdio.h>  

// Função recursiva para simular o movimento da rainha  
void rainha(int numero)  
{  
    if (numero > 0) // Verifica se ainda há casas para percorrer  
    {  
        printf("Esquerda \n"); // Imprime o movimento para a esquerda  
        rainha(numero - 1); // Chama a função novamente com o número de casas diminuído  
    }  
}  

// Função recursiva para simular o movimento da torre  
void torre(int numero)  
{  
    if (numero > 0) // Verifica se ainda há casas para percorrer  
    {  
        printf("Direita \n"); // Imprime o movimento para a direita  
        torre(numero - 1); // Chama a função da torre com o número de casas diminuído  
    }  
}  

int main()  
{  
    int casaRainha = 8; // Número de casas que a rainha pode mover  
    int casaTorre = 5; // Número de casas que a torre pode mover  
    int i, j; // Variáveis para iteração  

    // Início da movimentação da rainha  
    printf("Movimentação da Rainha: \n");  
    rainha(casaRainha); // Chama a função para a rainha  

    // Início da movimentação da torre  
    printf("Movimentação da Torre: \n");  
    torre(casaTorre); // Chama a função da torre 

    // Início da movimentação do bispo  
    printf("Movimentação do Bispo: \n");  
    for (i = 1; i <= 5; i++) // Loop para repetir o movimento 5 vezes  
    {  
        for (j = 1; j <= 1; j++) // Loop interno (aqui somente uma iteração)  
        {  
            printf("Direita, "); // Imprime o movimento para a direita  
        }  
        printf("Cima\n"); // Imprime o movimento para cima após mover para a direita  
    }  

    // Início da movimentação do cavalo  
    printf("Movimentação do Cavalo: \n");  
    for (i = 1, j = 1; i <= 1, j <= 3; i++, j++) // Loop para simular movimento  
    {  
        if (i <= 1) // Se for a primeira iteração  
        {  
            printf("Cima \n"); // Imprime o movimento para cima  
        }  

        if (j <= 3) // Se ainda estivermos nas iterações do cavalo  
        {  
            printf("Direita \n"); // Imprime o movimento para a direita  
        }  
    }  

    return 0; // Finaliza o programa  
}  