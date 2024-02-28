#include <stdio.h>

main() {
       int sayi, birler, onlar, binler, onbinler;
       printf("lutfen bes basamakli bir sayi giriniz: ");
       scanf("%d", &sayi);
       
       birler = sayi % 10;
       onlar = (sayi/10) % 10;
       binler = (sayi/1000) % 10;
       onbinler = (sayi/10000) % 10;
       
       if (birler == onbinler){
          if(onlar == binler)
          printf("sayi palindromik bir sayidir.");
          } 
       else{
       printf("sayi palindromik bir sayi degildir.");
       };
       getch();
       
}
