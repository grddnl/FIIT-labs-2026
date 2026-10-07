#include <stdio.h>
int main(){
    int h,w,d;
    scanf("%d %d %d", &h, &w, &d);
    double mas;
    mas = 750*2*(h*w*0.01)+1100*(h*w*0.005)+850*2*(h*d*0.015)+850*2*(w*d*0.015);//850 - плотность дсп 1100 плотность двп 750 плотность дерева
    if (h<190){
        double masp;
        masp = 3*850*(0.015*d*(w-0.03));
        mas += masp;

    }
    if (h>=190){
        double masp;
        masp = 3*850*(0.015*d*(w-0.03));
        mas += masp;

    }
    
    printf("%lf", mas);
}