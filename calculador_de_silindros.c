#include<stdio.h>

// Aqui vai os algoritimos de escolamento para a leitura de arquivos


int main () {
   
    struct configuracao {
        int pos_inicial;
        int tam_fila;
        int fila_espera[];
    };

    struct configuracao config;
    
    FILE *arq;
    int result;
    arq = fopen("ArquivoConf.txt", "rt");

    if (arq == NULL) {
        printf("Problemas na leitura do arquivo\n");
        return 0;
    } 

    while ()

    return 0;
}