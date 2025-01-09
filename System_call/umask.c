#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(){
    mode_t old_mask = umask(0);// 0 means allow any permission
    umask(old_mask);
    printf("umask is set to %03o\n", umask(old_mask)); //%03o: Formats the mask value as a 3-digit octal number, commonly used for file permissions.
    return 0;
}