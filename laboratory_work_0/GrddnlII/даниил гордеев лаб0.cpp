#include <stdio.h>
#include <math.h>
int main() {
    int x1,y1,r1,x2,y2,r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    int d;
    d = (int)sqrt((x2 - x1) * (x2 - x1) + ((y2 - y1) * (y2 - y1)));
    if (d == 0){
        if (r1 == r2){
            printf("a");//окружности совпадают и равны
        }
        if(r1 != r2){
            printf("b");//окружности не совпадают, но имеют общий центр
        }

    }else{
        if(r1+r2 < d){
            printf("c");//окружности не пересекаются и не касаются

        }
        if(r1+r2 == d){
            printf("d");//окружности касаются
        }
        if(r1+r2 > d){
            printf("e");//окружности пересекаются
        }
    }

}