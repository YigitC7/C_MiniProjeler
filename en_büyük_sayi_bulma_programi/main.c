#include <stdio.h>

void program(){
    int sayi1, sayi2, sayi3;

    printf("sayı 1:");
    scanf("%d",&sayi1);

    printf("sayı 2:");
    scanf("%d",&sayi2);

    printf("sayı 3:");
    scanf("%d",&sayi3);

    if(sayi1 > sayi2 && sayi1 > sayi3){
        printf("En büyük sayı:1 - %d\n",sayi1);
    }
    else if(sayi2 > sayi1 && sayi2 > sayi3){
        printf("En büyük sayı:2 - %d\n",sayi2);
    }
    else if(sayi3 > sayi1 && sayi3 > sayi2){
        printf("En büyük sayı:3 - %d\n",sayi3);
    }
    else{
        printf("Bütün sayılar eşit\n");
    }

}

int main(){
    program();
    return 0;
}
