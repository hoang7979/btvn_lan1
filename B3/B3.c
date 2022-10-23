#include <stdio.h>
#include <conio.h>

void main () 
{
    float x, y ;
    //nhập số thực x
    printf("nhap x :");
    scanf("%f",&x);
    y = 4*(x*2 + 10*x +3) ;
    // in ra giá trị của y (lấy 2 số lẻ) theo công thức: y = 4(x2 + 10x +3)
    printf("gia tri cua y la: %.2f",y);
}