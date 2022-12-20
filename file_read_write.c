#include <stdio.h>
int main(){
    FILE *dosya =fopen("dosya.txt","a");
    int sayi;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
    if(sayi < 100){
        fprintf(dosya,"%d\n",sayi);
        fclose(dosya);
        FILE *dosya=fopen("dosya.txt","r");
        while(fscanf(dosya,"%d",&sayi) != EOF)
            printf("%d\n",sayi);
    }
    else{
        printf("100 den küçük sayi giriniz");
    }
}
