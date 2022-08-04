#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* f_ptr = fopen ("test_text_file","w");
    if (!f_ptr)
    {
        perror("Could not open file\n");
        return -1;
    }
    char*arr ="Hello World";
    fwrite(arr, sizeof(char), 12, f_ptr);
    fclose(f_ptr);

    return 0;
}