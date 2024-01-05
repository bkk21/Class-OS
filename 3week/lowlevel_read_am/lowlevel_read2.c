#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
int fd;
char buff[972398];
int nb;
int i;

fd = open("american-english", O_RDONLY);
nb = 972398;

read(fd, buff, nb);
for (i = 0; i < nb; i++)
    printf("%c", buff[i]);
}