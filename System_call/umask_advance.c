#include <fcntl.h> //for open
#include <unistd.h> // for read , write, close
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

const char *kFileName = "myFile";
const char *kFileExistsErr = 17;

int main()
{
    umask(0);
    int file_descriptor = open(kFileName, O_WRONLY | O_CREAT | O_EXCL, 0644);
    if(file_descriptor == -1){
        printf("there was a problem creating '%s'!\n", kFileName);
        if (errno == kFileExistsErr){
            printf("the file already exists!\n");
        } else {
            printf("unknown error%d\n", errno);
    }
    return -1;
}
close(file_descriptor);
return 0;
}
