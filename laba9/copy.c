#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main (int argc, char* argv[]){
    int c;
    

    if (argc==1){
      while ((c = getchar()) != EOF) {
        putchar(c);
      
      }
    }

    

    int fd_read = open(argv[1], O_RDONLY);
    int fd_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd_read == -1 && fd_write == -1){
        dprintf(2, "error");
        return 1;
    }
    char ch[1];
    while (read(fd_read, ch,1) > 0){
        
        write(fd_write, ch, 1);
        dprintf(2, "done");
        
    }
    close(fd_read);
    close(fd_write);
    
    
    
}