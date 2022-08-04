#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* f_ptr = fopen ("test_text_file","w");
    if (!f_ptr)
    {
        perror("Could not open file\n");
        return -1;
    }
    int arr[] ={63, 64, 65, 66};
    fwrite(arr, sizeof(int), 4, f_ptr);
    fclose(f_ptr);

    return 0;
}