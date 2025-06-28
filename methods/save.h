#include <stdio.h>
#include <stdlib.h>

#include <sys/stat.h>
#include <sys/types.h>

#include <windows.h>

FILE *ponteiro;

int save() {
    printf("Your file was saved.");
    // cria diretorios caso não existam
    #ifdef _WIN32
        CreateDirectory("vex", NULL);
        CreateDirectory("vex/saves", NULL);
        CreateDirectory("vex/.temp", NULL);
    #elif __linux__
        mkdir("vex", 0755) == 0;
        mkdir("vex/saves", 0755) == 0;
        mkdir("vex/.temp", 0755) == 0;
    #endif
        return 0;

    // copia os arquivos do diretorio atual e salva dentro de uma pasta no diretorio /vex

    return 0;
}