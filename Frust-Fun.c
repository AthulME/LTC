#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float VolFrust(float r,float R,float h){
    const float pi=3.1415926535898;
    float vol;
    vol= (pi*h/3.0)*(pow(R,2)+(R*r)+pow(r,2));
    return vol;
    
}
int main() {
    float h,R,r;
    float v;
    scanf("%f",&r);
    scanf("%f",&R);
    scanf("%f",&h);
    v=VolFrust(r,R,h);
    printf("%0.2f",v);
   
    return 0;
}
