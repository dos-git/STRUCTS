#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#include "structures_tutorial.h"

int main(int argc, char *argv[])
{
    char *n = "DOMINO";
    char *n_2 = "STEFANO";
    basic_struct_t bs;
    bs.nr = 1;
    printf("LEN : %d\n", sizeof(n));
    strncpy(bs.name, n, sizeof(n));

    printf("LEN2 : %d\n", sizeof(n_2));
    bs.name_2 = (char *)malloc(sizeof(n_2));
    strncpy(bs.name_2, n_2, sizeof(n_2));


    printf("NUMBER : %d\n", bs.nr);
    printf("NAME   : %s\n", bs.name);
    printf("NAME2  : %s\n", bs.name_2);
    free(bs.name_2);

    return 0;
}
