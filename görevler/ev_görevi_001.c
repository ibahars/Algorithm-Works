//girilen üç sayý arasýnda tekrar eden olup olmadýðýný bulur

#include <stdio.h>

main(){
      
       int a, b, c, tekrar = 0;
       printf("uc sayý gir: ");
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
