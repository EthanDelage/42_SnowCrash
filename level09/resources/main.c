#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av) {
    ssize_t len = strlen(av[1]);
    ssize_t i = 0;

    while (i < len) {
      printf("%c", av[1][i] - i);
    }
    printf("\n");
}