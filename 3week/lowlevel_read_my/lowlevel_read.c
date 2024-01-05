#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int fd;
    char buff[1024];
    int nb;
    int i;
    fd = open("myFile.txt", O_RDONLY);
    nb = 1024;
    read(fd, buff, nb);

    for (i = 0; i < nb; i++)
        printf("%c", buff[i]);
    
    printf("\n");
}