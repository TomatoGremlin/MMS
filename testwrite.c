#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
    int fd = open("test_binary", O_WRONLY | O_TRUNC);
    printf("%d\n", fd);

    if (fd == -1)
    {
        perror("Could not open\n");
    }
    
    //char* buf = "HELLO SKYCALLS\n";
    int* arr = {1,2,3,4};
   // int sym_num = strlen(buf);
    int written_count;
    //written_count = write(3, buf, sym_num);
    written_count = write(1, arr, sizeof(int)*4);
    //if (written_count != sym_num)
    if (written_count != sizeof(int)*4)
    {
        //write(2, "Could not open\n", 22);
        write(2, "Could not write to file\n", 26);
    }
    close(fd);
    return 0;
}