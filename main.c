#include "List_lib.h"

int main(int argc, char *argv[]) {

    int node_value = 0;
    FILE *file = fopen("../input", "r");

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
        fclose(file);
        FILE *result = fopen("../result", "w");
        if(is_palindrome(l))
        {
            fputs("True", result);
            fclose(result);
        }else{
            fputs("False", result);
            fclose(result);
        }
    }
    return 0;
}
