#include <stdio.h>

main () { 
     int sayi1, sayi2;
     printf("once kucuk sonra buyuk sayiyi yaziniz: ");
     scanf("%d %d", &sayi1, &sayi2);
     
     
     while(sayi2 % 2 == 0 && sayi1 <= sayi2){
                 printf(" %d", sayi2);
                 sayi2 = sayi2 - 2;
                 }
     
       while(sayi1 % 2 == 1 && sayi1 <= sayi2){
                 printf(" %d",sayi2);
                 sayi1 = sayi1 + 2;
                 }
    
                   
   
      getch();
     }
                     
