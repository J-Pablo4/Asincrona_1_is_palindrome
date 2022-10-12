#include "List_lib.h"

int main(int argc, char *argv[]) {

    int node_value;
    FILE *file = fopen(argv[1], "r");

    if(file == NULL)
    {
        printf("No se abrio el archivo\n");
        return 0xF0;
    }else
    {
        List *l = new_list();
        while (!feof(file))
        {
            fscanf(file, "%d", &node_value);
            list_append(l, node_value);

        }
    }
    fclose(file);

    is_palindrome(argv[1]);

    return 0;
}
