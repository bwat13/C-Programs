#include <stdio.h>

const char * array[] = {
    "First entry",
    "Second entry",
    "Third entry",
};

//#define n_array (sizeof (array) / sizeof (const char *))

int main ()
{
    int i;

    for (i = 0; i < 3; i++) {
        printf ("%d: %s\n", i, array[i]);
    }
    return 0;
}
