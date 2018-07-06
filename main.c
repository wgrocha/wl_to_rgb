#include <stdio.h>
#include "wl_to_rgb.h"

int main (void){
    double x;
    //Can be declared as "RGBColor mycolor", it's not necessary to use the initialization macro here
    RGBColor(myColor); 
    scanf ("%lf", &x);
    myColor = wavelengthToRGB (x);
    printf("%lf, %lf, %lf\n", myColor.value[0], myColor.value[1], myColor.value[2]);
    return (0);
}