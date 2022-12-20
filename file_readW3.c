#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){
    FILE *fp;
    char str[100];
    fp = fopen("C:\\Users\\akifc\\Desktop\\file.txt","r");
    while(fgets(str,100,fp) != NULL){
        printf("%s",str);
    }
    fclose(fp);
    return 0;

}
