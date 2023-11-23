#include <stdio.h>
#include "cs50.h"

int main(int argc, char *argv[])
{
    char c = get_char("Do you agree? ");
    if (c == 'Y' || c == 'y')
    {
        printf("Agree.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}