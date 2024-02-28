#include <stdio.h>

main(){
       int sayi, birler, onlar, carpim, sayac = 0;
       printf("lutfen iki basamakli bir sayi giriniz: ");
       scanf("%d", &sayi);
       
       carpim = sayi;
      
       while( 1 <= (carpim / 10)){
               birler = carpim % 10;
               onlar = (carpim / 10) % 10;
               carpim = onlar * birler;
               sayac++;
              }
       
       printf(" yazilan sayinin carpim direnci %d", sayac);
       
       getch();
       }
