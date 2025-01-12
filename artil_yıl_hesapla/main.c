#include <stdio.h>

void program(){
    int yil_int_main;

    printf("Bir yıl girin: ");
    scanf("%d",&yil_int_main);

    if(yil_int_main < 0){
        printf("Geçersiz yıl girdiniz\n");
    }
    else if(yil_int_main % 4 == 0 && yil_int_main % 100 != 0 || yil_int_main % 400 == 0){
        printf("Bu artık bir yıldır\n");
    }
    else{
        printf("Bu artık bir yıl değildir\n");
    }
}

int main(){program();
    return 0;
}
