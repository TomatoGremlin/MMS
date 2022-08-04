#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* f_ptr = fopen ("test_text_file","r");
    if (!f_ptr)
    {
        perror("Could not open file\n");
        return -1;
    }
    char arr[12];
    fwrite(arr, sizeof(char), 12, f_ptr);
   
    // 3 ways to print in the out stream
    
    //printf("%s", arr);
    //fwrite(arr, sizeof(char), 12, stdout);
   // fprintf(stdout, "%s", arr);

    fclose(f_ptr);

    return 0;
}