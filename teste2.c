#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ( ){

    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprime Texto que fala da soma de A e B
    printf("A soma de A + B e igual: ");
    // A e B est�o declarados como inteiros
    int a = 50;
    int b = 6;
    // Aqui A e B s�o usados como elementos para o texto exibido
    printf("%d\n", a + b);
    printf("O valor de A �: %d\n", a);
    printf("O valor de B �: %d\n", b);
    scanf("%d", &a);
    printf("O valor de A mudou para: %d", a);
}
