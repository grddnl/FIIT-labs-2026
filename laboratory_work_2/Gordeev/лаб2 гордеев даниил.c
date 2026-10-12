#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    int r;
    scanf("%d",&r);
    if (r == 1){
    
        int a = rand()%1001; 
        printf("%i",a);//чтобы облегчить проверку
        while (1) { // 1 чтобы цикл работал вечно до момента где брикаем его
            int b;
            scanf("%d", &b);

            if (b > a) {
                printf("less\n");
            }
            else if (b < a) {
                printf("small\n"); 
            }
            else {
                printf("win\n");
                break; 
            }
            
        
        }
    }
    else if (r == 2){
        int a;
        scanf("%d",&a);
        int b = 500;
        int min = 1;
        int max = 1000;
        char z;
        while(1){
            scanf(" %c", &z);
            if (z == '>'){
                min = b + 1;
                b = (min + max) / 2;
                printf("%i",b);
            }
            else if (z == '<'){
                max = b - 1;
                b = (min + max) / 2;
                printf("%i",b);
            }
            else if (z == '='){
                printf("%i",b);
                break;
            }
        }
    }
    
}
