#include "List_lib.h"
#include <string.h>

int main(int argc, char *argv[]) {

    if (!strcmp(argv[1], "is_palindrome"))
    {
        is_palindrome();
    }
    else
    {
        printf("Invalid function. Please use the 'is_palindrome' function.\n");
    }
    return 0;
}
