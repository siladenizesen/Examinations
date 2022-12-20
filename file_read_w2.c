
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){
    FILE *fp;
    char str[100];
    fp = fopen("file.txt","w+");
    fprintf(fp,"Akif was here...\n");
    fprintf(fp,"Akif was not tehre...\n");
    fprintf(fp,"Akif was not with me...\n");
    fprintf(fp,"Akif was not with you...\n");
    
    rewind(fp);
    while(fgets(str,100,fp) != NULL){
        printf("%s",str);
    }
    fclose(fp);
    return 0;
    
}
