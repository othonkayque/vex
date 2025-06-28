#include <stdio.h>
#include <string.h>

#include "methods/help.h"
#include "methods/save.h"
#include "methods/delete.h"
#include "methods/list.h"
#include "methods/init.h"

int main(int argc, char *argv[265]) {
    if((argc >= 1 && strcmp(argv[1], "help") == 0)) {
        help();
    } else if ((argc >= 1 && strcmp(argv[1], "save") == 0)) {
        save();
    } else if((argc >= 1 && strcmp(argv[1], "delete")) == 0) {
        delete();
    } else if((argc >= 1 && strcmp(argv[1], "list")) == 0) {
        list();
    } else if ((argc >= 1 && strcmp(argv[1], "init")) == 0) {
        init();
    } else if((argc >= 1 && strcmp(argv[1], "")) == 0) {
        help();
    }
    return 0;
}