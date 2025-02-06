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

    for (int i = 1; i < argc; i++){

    int fd = open(argv[i], O_RDONLY);
    if (fd == -1){
        dprintf(2, "error");
        return 1;
    }
    char ch[1];
    while (read(fd, ch,1) > 0){
        putchar(ch[0]);
    }
    close(fd);
    
    }
    
}