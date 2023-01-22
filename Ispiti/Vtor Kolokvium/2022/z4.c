#include <stdio.h>

int main(int argc, char *argv[])
{

    FILE *indat, *outdat;
    char c;

    if (argc != 3)
        return -1;

    if ((indat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((outdat = fopen(argv[2], "w")) == NULL)
        return -1;

    

    return 0;
}