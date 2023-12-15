#include "main.h"
#include <unistd.h>

void _puts(char *s) {
    int len = _strlen(s);
    write(1, s, len);
    write(1, "\n", 1);
}

