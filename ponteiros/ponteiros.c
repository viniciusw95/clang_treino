/* Código criado ao acompanhar a aula 'PONTEIROS | Linguagem C #020' 
   do canal WR Kits (https://www.youtube.com/@canalwrkits). */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float variavel = 250.8;
    int *ponteiro;
    float exibe;

    ponteiro = &variavel;
    exibe = *ponteiro;

    printf("%f\n", exibe);
}