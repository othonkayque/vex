#include <stdio.h>
#include <string.h>

#include "methods/help.h"
#include "methods/save.h"
#include "methods/remove.h"

int main(int argc, char *argv[265]) {
    if((argc >= 1 && strcmp(argv[1], "help") == 0)) {
        help();
    } else if ((argc >= 1 && strcmp(argv[1], "save") == 0)) {
        save();
    } else if((argc >= 1 && strcmp(argv[1], "")) == 0) {
        printf("Você pode aprender os comandos digitando -> vex help");
    }
    return 0;
}