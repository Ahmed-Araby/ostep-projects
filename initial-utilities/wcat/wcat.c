#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    for(int fileIndex = 1; fileIndex < argc; fileIndex++){
        char *fileName = argv[fileIndex];
        FILE *fp = fopen(fileName, "r");
        if(fp == NULL){
            printf("wcat: cannot open file\n");
            exit(1);
        }
        char buffer[10];
        while(fgets(buffer, 10, fp)!=NULL){
            printf("%s", buffer);
        }
        fclose(fp);
    }
    return 0;
}