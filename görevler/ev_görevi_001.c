//girilen �� say� aras�nda tekrar eden olup olmad���n� bulur

#include <stdio.h>

main(){
      
       int a, b, c, tekrar = 0;
       printf("uc say� gir: ");
       scanf("%d, %d, %d", &a, &b, &c);
       
       if(a==b)
       tekrar = 1;
       
         if(a==c)
       tekrar = 1;
      
        if(c==b)
       tekrar = 1;
       
       if(tekrar == 1)
       printf("tekrar var");
       
       if(tekrar == 0)
       printf("tekrar yok");  
       getch();
       
       
}
