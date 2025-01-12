#include <stdio.h>

void program(){
    short ope;
    int numara1, numara2, numara3;

    printf("Operetör seçin:\n1:+\n2:-\n3:*\n\n\t> ");
    scanf("%d",&ope);

    if(ope == 1){
        printf("1.sayı girin: ");
        scanf("%d",&numara1);

        printf("2.sayı girin: ");
        scanf("%d",&numara2);

        printf("3.sayı girin: ");
        scanf("%d",&numara3);

        printf("Toplamı: %d\n",
               numara1 + numara2 + numara3);
    }
    else if(ope == 2){
        printf("1.sayı girin: ");
        scanf("%d",&numara1);

        printf("2.sayı girin: ");
        scanf("%d",&numara2);

        printf("3.sayı girin: ");
        scanf("%d",&numara3);

        printf("Çıkarma: %d\n",
               numara1 - numara2 - numara3);
    }
    else if(ope == 3){
        printf("1.sayı girin: ");
        scanf("%d",&numara1);

        printf("2.sayı girin: ");
        scanf("%d",&numara2);

        printf("3.sayı girin: ");
        scanf("%d",&numara3);

        printf("Çarpımı: %d\n",
               numara1 * numara2 * numara3);
    }
    else{
        printf("Geçersiz operatör\n");
    }
}

int main(){program();
    return 0;}
