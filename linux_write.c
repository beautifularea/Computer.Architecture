/*
gcc -static a.c
objdump -d > assemble
查看write的执行过程。
*/

  1 #include <unistd.h>
  2 #include <stdio.h>
  3 #include <fcntl.h>
  4 #include <stdlib.h>
  5 #include <string.h>
  6 
  7 int main(void)
  8 {
  9     char buffer[10] = "hello\n";
 10     int count;
 11     int fd = open ("ab.txt",O_RDWR);
 12     if (fd == -1)
 13     {
 14         fprintf(stderr,"can't open file:[%s]\n","ab.txt");
 15         exit(EXIT_FAILURE);
 16     }
 17     count = write(fd,buffer,strlen(buffer));
 18     if (count == -1)
 19     {
 20         fprintf(stderr,"write error\n");
 21         exit(EXIT_FAILURE);
 22     }
 23 
 24     exit(EXIT_SUCCESS);
 25 }

