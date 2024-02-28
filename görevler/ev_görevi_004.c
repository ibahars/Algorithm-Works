#include <stdio.h>

main () { 
     int sayi1 = 0, sayi2 = 1, toplam, terim, sayac = 2;
     printf("lutfen terim sayisi girin: ");
     scanf("%d", &terim);
            
     while(sayac < terim){
                 
                 toplam = sayi1 + sayi2;
                 sayi1 = sayi2;
                 sayi2 = toplam;
                 sayac++;
                 
                 
                 } 
                 
     if (terim == 1)
     printf ("fibonocci de birinci terim 0 ");
     
                  
     if (terim == 2)
     printf ("fibonocci de birinci terim 1 ");
     
                  
     if (terim > 2)
     printf ("fibonocci de %d. terim %d ", terim, toplam);
     
    getch();
     }
                     
