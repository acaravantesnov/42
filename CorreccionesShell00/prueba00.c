#include <stdio.h>
#include <unistd.h>

int main(){
    char a=49;
    write(1,&a,1);
    return 0;
}