#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    if(argc < 2){
        printf(1, "you should pass your name");
        exit();
    }
    printf(1, "hello my name is %s \n", argv[1]);
    exit();
}
