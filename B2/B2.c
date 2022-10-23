#include <stdio.h>
#include <conio.h>

void main () 
{
    int r ;
  // nhập bán kính hình tròn 
    printf("nhap ban kinh hinh tron :");
    scanf("%d",&r);
    // nhập giá trị của pi , phép tính chu vi , diện tích 
    float  pi = 3.14159 ,
        chuvi = 2*pi*r,
        dientich = pi * r * r ;
    // in ra màn hình chu vi và diện tích 
    printf("chu vi hinh tron la :%f\n",chuvi);
    printf("dien tich hinh tron la :%f ",dientich); 
}