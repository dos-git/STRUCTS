#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#include "structures_tutorial.h"

int main(int argc, char *argv[])
{
    char *l = "SD";
    char *n = "DOMINO";
    char *n_2 = "STEFANO";
    char *n_3;
    char a[10];
    char b[] = "PPP";
    printf("LEN 0     : %d\n", strlen(l));
    printf("LEN 1     : %d\n", strlen(n));
    printf("LEN 2     : %d\n", strlen(n_2));
    basic_struct_t bs;
    a = (char*)b;
    //n_3 = "ds";
    //

    bs.nr = 1;
    printf("LEN FIXED ARRAY : %d\n", sizeof(bs.name_fixed_array));
    printf("LEN POINTER     : %d\n", sizeof(bs.name_pointer));
    bs.name_pointer = n_3;
    strncpy(bs.name_fixed_array, n, sizeof(n));
    bs.name_pointer = (char *)malloc(sizeof(n_2));
    strncpy(bs.name_pointer, n_2, sizeof(n_2));

    printf("LEN FIXED ARRAY : %d\n", sizeof(bs.name_fixed_array));
    printf("LEN POINTER     : %d\n", sizeof(bs.name_pointer));
    free(bs.name_pointer);
    printf("DUPA\n");
    return 0;
}
