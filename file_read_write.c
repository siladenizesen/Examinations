
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){
    FILE *fp;
    char ch;
    fp = fopen("C:\\Users\\akifc\\Desktop\\test.txt","r");
    if(fp == NULL){
        printf("Dosya acilamadi");
        exit(1);
    }
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}


with open('input.txt') as f:
    lines = f.readlines()
