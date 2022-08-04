#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int arc , char* argp[]){
    int fd_in = open(argp[1] , O_RDONLY);
    int fd_out = open(argp[2] , O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);

    int file_byte_size = lseek (fd_in, 0 , SEEK_END);
    lseek(fd_in, file_byte_size/2, SEEK_SET);


    if (fd_in == -1)
    {
        perror("Could not open\n");
        return -1;
    }

    char current_symbol;
    int read_count;
  
  while (read_count != 0)
  {
    read_count =read(fd_in, &current_symbol, 1);
    if (read_count == -1)
    {
        perror("Could not read from in_file\n");
    }

    int written_count;
    written_count = write(1, &current_symbol, 1);
   
    if (written_count == 0)
    {
        perror("Write error\n");
        return -1;
    }
  }
  
    close(fd_in);
    return 0;
}