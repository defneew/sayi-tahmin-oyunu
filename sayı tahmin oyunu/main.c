#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int rastgeleSayi = (rand()%10)+1;
    int tahmin,sayac=1;
    printf("Sayi Tahmin Oyunu\n\n");
   // prinf("%d",rastgeleSayi); isteðe baðlý böyle bir satýr ekleyebiliriz.
    printf("Lutfen tahmininizi giriniz...\n"); scanf("%d",&tahmin);
    while(rastgeleSayi != tahmin){
        if(tahmin>rastgeleSayi){
            printf("Tahmini kucult...\n"); scanf("%d",&tahmin);
        }
        else if(tahmin<rastgeleSayi){
            printf("Tahmini buyult...\n"); scanf("%d",&tahmin);
        }
        sayac++; //deneme sayimiz bulmak için sayaç deðiþkenini kullanýyoruz.
    }
    if(tahmin==rastgeleSayi){
        printf("%d.denemede dogru tahmin...",sayac);
    }
}
